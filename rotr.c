#include "monty.h"

/**
*_rotr - rotates the stack to the bottom
* @stack: pointer to top of stack
* @line_number: line count
* Return: void
*/
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *last;

	(void) line_number;
	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		return;

	first = last = *stack;
	while (last->next)
		last = last->next;

	last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	*stack = last;
}
