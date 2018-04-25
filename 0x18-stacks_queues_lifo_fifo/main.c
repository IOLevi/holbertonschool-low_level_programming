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
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	printf("INSIDE HERE\n");
	while (s1[i] != '\0' && s2[i] != '\0')
	{
			printf("%c %c\n", s1[i], s2[i]);

		if (s1[i] != s2[i])
			printf("INSIDE HERE3\n");

			return (s1[i] - s2[i]);
		i++;
	}
		printf("INSIDE HERE4\n");

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (-1);
}
int main(int argc, char **argv)
{

	FILE *fd;
	int readnum;
	size_t len;
	unsigned int line_number;
	int i;
	char *strinput;
	instruction_t p[7];
	char *tokens[2];
	stack_t *head;

	initialize_instructions(p);
	printf("opcode %s\n", p[0].opcode);
	head = NULL;
	printf("HI1\n");

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}
	printf("HI3\n");

	fd = fopen(argv[1], "r");
	printf("HI4\n");

	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);

	}
	//push, pall, pint, pop, swap, add, nop
	line_number = 0;
	printf("HI5\n");
	while (getline(&strinput, &len, fd) != -1)
	{
		printf("HI6\n");
		line_number++;
		printf("the line %s", strinput);
		//get first token (the command)
		tokens[0] = strtok(strinput, DELIM);
		printf("Hi6.5\n");
		//store all the tokens in a char array first
		
		//skip empty lines
		if (tokens[0] == NULL)
		{
			printf("PROBLEM!!!\n");
			free(strinput);
			continue;
		}
			

		//get command argument
		tokens[1] = strtok(NULL, DELIM);
		printf("HI6.6\n");
		n = tokens[1];
		printf("HI6.7\n");
		i = 0;
		printf("token 0 %s\n", tokens[0]);
		while (p[i].opcode != NULL)
		{
			printf("hi6.8\n");
			printf("%d\n", i);
			printf("opcode %s token %s\n", p[i].opcode, tokens[0]);
			if (_strcmp(tokens[0], p[i].opcode) == 0)
			{
				printf("HI7");
				p[i].f(&head, line_number);
				break;
			}
			i++;

		}
		n = NULL; //TODO: do i need this
		free(strinput);
	}
	//free dkist
	//fclose
	fclose(fd);
	printf("ENDING!\n");
	return (0);
	 
}

void initialize_instructions(instruction_t p[])
{
	printf("hi\n");
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

	while (hpointer)
	{
		printf("%d\n", hpointer->n);
		hpointer = hpointer->next;
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
	if (*head != NULL)
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
	;
}


void _pop(stack_t **head, unsigned int line_number)
{
	;
}

void _swap(stack_t **head, unsigned int line_number)
{
	;
}

void _add(stack_t **head, unsigned int line_number)
{
	;
}

void _nop(stack_t **head, unsigned int line_number)
{
	;
}