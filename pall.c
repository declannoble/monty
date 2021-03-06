#include "monty.h"

/**
 *_pall - prints the stack line by line , or exits if empty
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	if ((*stack) == NULL || stack == NULL)
		return;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
