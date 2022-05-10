#include "monty.h"

/**
 *_sub - subtracts top element from the second top element of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *first, *second;

	(void)line_number;
	if (stack == NULL || *stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->next != NULL)
	{
		first = current;
		second = current->next;
		second->n = second->n - first->n;
		second->prev = NULL;
		*stack = second;
		free(first);
	}
}
