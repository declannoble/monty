#include "monty.h"

/**
 * _add - adds top two elements on stack
 * @stack: pointer to beginning of stack
 *@line_number: line number
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int result;

	if ((*stack) == NULL || stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = ((*stack)->next->n) + ((*stack)->n);
	_pop(stack, line_number);
	(*stack)->n = result;
}
