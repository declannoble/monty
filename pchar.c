#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack
 * @stack: pointer to beginning of stack
 *@line_number: line number
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *s = *stack;

	if (s == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (s->n >= 32 && s->n <= 126)
		printf("%c\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
}
