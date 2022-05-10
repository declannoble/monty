#include "monty.h"

/**
 *_mod - computes rest of the division of 2nd top by top element of stack.
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *first, *second;

	(void)line_number;
	if (stack == NULL || *stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->next != NULL)
	{
		first = current;
		second = current->next;
		second->n = second->n % first->n;
		second->prev = NULL;
		*stack = second;
		free(first);
	}
}
