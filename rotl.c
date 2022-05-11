#include "monty.h"

/**
 * _rotl - rotates the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first;
	stack_t *last;

	(void) line_number;
	if (stack == NULL || *stack == NULL)
		return;

	first = last = *stack;

	while (last->next)
		last = last->next;

	last->next = first;
	first->prev = last;
	*stack = first->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
