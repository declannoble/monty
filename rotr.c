#include "monty.h"

/**
*_rotr - rotates the stack to the bottom
* @stack: pointer to top of stack
* @line_count: line count
* Return: void
*/
void _rotr(stack_t **stack, unsigned int line_count)
{
	(void) line_count;

	if (*stack)
		*stack = (*stack)->prev;
}
