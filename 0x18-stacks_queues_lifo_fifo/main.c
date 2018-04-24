#include "monty.h"
char *n = NULL;


int main(int argc, char **argv)
{

	int fd;
	int readnum;
	int len;
	unsigned int line_number;
	int i;
	char *strinput;
	instruction_t p[7];
	char *tokens[2];
	stack_t *head;

	initialize_instructions(p);
	head = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);

	}
	//push, pall, pint, pop, swap, add, nop
	linenumber = 0;
	while((readnum = getline(&strinput, &len, fd)) != -1)
	{
		line_number++;
		//get first token (the command)
		tokens[0] = strtok(strinput, DELIM);
		//store all the tokens in a char array first
		
		//skip empty lines
		if (tokens[0] == NULL)
			continue;

		//get command argument
		tokens[1] = strtok(NULL, DELIM);
		n = tokens[1];
		i = 0;
		while (p[i].opcode != NULL)
		{
			if ((strcmp(tokens[0], p[i].opcode) == 0))
			{
				//error_check(tokens, line_number);
				p[i].f(&head, line_number);

			}
			i++;

		}
		n = NULL; //TODO: do i need this
		free(strinput);
	}
	//free dkist
	return (0);
	 
}

void intialize_instructions(instruction_t p[])
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
	if (!head || !*head)
		return;
	
	_pall((*head)->next, n);
	printf("%d\n", (*head)->n);
	
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
	//TODO: account for malloc failure

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
/
