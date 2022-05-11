#include "monty.h"

/**
 * _free - frees a stack
 * @stack: the stack to be freed
 * Return: is void
 */

void _free(stack_t *stack)
{
 	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
