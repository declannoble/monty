#include "monty.h"

/**
 *_push - prints the stack line by line , or exits if empty
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;
	char *value;
	int number, i = 0, flag = 0;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	value = strtok(NULL, " \n\t\r");
	if (value == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (value[i] != '\0')
	{
		flag = isdigit(value[i]);
		if (flag == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
        	        exit(EXIT_FAILURE);
		}
		i++;
	}
	number = atoi(value);
	newnode->n = number;
	newnode->prev = NULL;
	newnode->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = newnode;
	*stack = newnode;
}
