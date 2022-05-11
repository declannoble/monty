#include "monty.h"

/**
 *_pint - prints value on top of stack, or exits if empty
 * @stack: pointer to top of stack
 * @line_number: line number
 * Return: void
 */

void _pint(stack_t **stack, unsigned int line_number)
{

	if ((*stack) == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
