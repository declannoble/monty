#include "monty.h"

/**
 *_pop - removes the top element of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *pop;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	if (current != NULL)
	{
		pop = current;
		current = current->next;
		if (current != NULL)
			current->prev = NULL;
		free(pop);
		*stack = current;
	}
}
