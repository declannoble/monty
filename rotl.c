#include "monty.h"

/**
 *_rotl - rotates stack to the top
 *@stack: pointer to top of stack
 *@line_number: line number
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL)
		*stack = (*stack)->next;
}
