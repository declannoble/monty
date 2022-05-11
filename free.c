#include "monty.h"

/**
 * freestack - frees a stack
 * @stack: the stack to be freed
 * Return: is void
 */

void freestack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
