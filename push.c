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
	int number, i, sign;

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
	for (i = 0; value[i] != '\0'; i++)
	{
		if (isdigit(value[i]) == 0 && value[0] == '-')
			sign = 1;
		if (isdigit(value[i]) == 0 && value[0] != '-')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	if (value[1] == '0')
		sign = 1;
	number = atoi(value) * sign;
	newnode->n = number;
	newnode->prev = NULL;
	newnode->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = newnode;
	*stack = newnode;
}
