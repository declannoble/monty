#include "monty.h"

/**
 *_swap - swaps the top two elements of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int temp;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = (*stack)->next;
	temp = (*stack)->n;
	(*stack)->n = current->n;
	current->n = temp;
}
