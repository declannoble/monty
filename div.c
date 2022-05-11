#include "monty.h"

/**
 *_div - divides 2nd top element by the top element of the stack.
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *first, *second;

	(void)line_number;
	if (stack == NULL || *stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (current->next != NULL)
	{
		first = current;
		second = current->next;
		second->n = second->n / first->n;
		second->prev = NULL;
		*stack = second;
		free(first);
	}
}
