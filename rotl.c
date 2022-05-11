#include "monty.h"

/**
 *_rotl - rotates stack to the top
 *@stack: pointer to top of stack
 *@line_number: line number
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first;
	stack_t *last;

	(void) line_number;

	if (*stack == NULL || stack == NULL)
		return;

	first = last = *stack;

	while(first->next)
		first = first->next;
	first->next = last;
	last->prev = first;
	*stack = first->next;
}
