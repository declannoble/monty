#include "monty.h"

/**
 *_swap - swaps the top two elements of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *swap, *toSwap;

	(void)line_number;
	if (stack == NULL || *stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: usage: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->next != NULL)
	{
		swap = current;
		toSwap = current->next;
		current = toSwap->next;
		toSwap->prev = NULL;
		toSwap->next = swap;
		swap->prev = toSwap;
		swap->next = current;
		*stack = toSwap;
	}
}
