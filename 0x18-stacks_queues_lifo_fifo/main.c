#include "monty.h"

char *n = NULL;
//NOTE TO SELF: RUN "./a.out byte.m" exactly to get it to read the line

/**
 * _strcmp - compares two strings
 * @s1: first operand
 * @s2: second operand
 *
 * Return: positive if s1 is bigger, 0 if they are the same, otherwise negative
 */

void free_list(stack_t *head)
{
	stack_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}	


}
int main(int argc, char **argv)
{

	FILE *fd;
	int readnum;
	size_t len;
	unsigned int line_number;
	int i;
	char *strinput;
	instruction_t p[8];
	char *command;
	char *argument;
	stack_t *head;

	initialize_instructions(p);
	head = NULL;
	
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}
	fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);

	}
	//push, pall, pint, pop, swap, add, nop
	line_number = 0;
	while (getline(&strinput, &len, fd) != -1)
	{
		line_number++;
		//get first token (the command)
		command = strtok(strinput, DELIM);
		//store all the tokens in a char array first
		//skip empty lines
		if (command == NULL)
		{
			free(strinput);
			continue;
		}

		//get command argument
		argument = strtok(NULL, DELIM);
		n = argument;
		i = 0;

		while (p[i].opcode != NULL)
		{
			if (strcmp(command, p[i].opcode) == 0)
			{
				p[i].f(&head, line_number);
				break;
			}
			i++;
		}
		n = NULL; //TODO: do i need this
	}
	//free dkist
	//fclose
	fclose(fd);
	free_list(head);
	return (EXIT_SUCCESS);

	 
}

void initialize_instructions(instruction_t p[])
{
	p[0].opcode = "push";
	p[0].f = _push;

	p[1].opcode = "pall";
	p[1].f = _pall;

	p[2].opcode = "pint";
	p[2].f = _pint;

	p[3].opcode = "pop";
	p[3].f = _pop;

	p[4].opcode = "swap";
	p[4].f = _swap;

	p[5].opcode = "add";
	p[5].f = _add;

	p[6].opcode = "nop";
	p[6].f = _nop;
	
	p[7].opcode = NULL;
	p[7].f = NULL;
}

void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *hpointer;

	if (!head || !*head)
		return;
	
	hpointer = *head;

	while (hpointer->next)
	{
		hpointer = hpointer->next;
	}

	while (hpointer)
	{
		
		printf("%d\n", hpointer->n);
		hpointer = hpointer->prev;

	}
}

void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	stack_t *hpointer;
	int newn;

	//no n global variable
	if (atoi(n) == 0 && strcmp(n, "0") != 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		//TODO: call freeing stuff
		exit(EXIT_FAILURE);
	}
	else
		newn = atoi(n);


	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("Error: malloc failed\n");
		//TODO: free before exiting
		exit(EXIT_FAILURE);
	}

	new->n = newn;
	new->next = NULL;
	new->prev = NULL;

	//empty list
	if (*head == NULL)
	{
		*head = new;
		return;
	}

	//nonempty list
	hpointer = *head;

	while (hpointer->next != NULL)
		hpointer = hpointer->next;

	hpointer->next = new;
	new->prev = hpointer;
}

void _pint(stack_t **head, unsigned int line_number)
{
	stack_t *hpointer;
	if (!head || !*head)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	hpointer = *head;
	while (hpointer->next)
		hpointer = hpointer->next;

	printf("%d\n", hpointer->n);
}


void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *hpointer;

	//list of len 0
	if (!head || !*head)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	hpointer = *head;

	//list of len 1
	if (hpointer->next == NULL)
	{
		free(hpointer);
		*head = NULL;
		return;
	}

	//list of 2 or more
	while (hpointer->next != NULL)
		hpointer = hpointer->next;
	
	hpointer->prev->next = NULL;
	free(hpointer);
		
}

void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *hpointer;

	if (!head || !*head || (*head)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	hpointer = *head;
	//list of length 2
	if (hpointer->next->next == NULL)
	{
		//swap

	}
}

void _add(stack_t **head, unsigned int line_number)
{
	;
}

void _nop(stack_t **head, unsigned int line_number)
{
	;
}
