#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to beginning of stack
 *@line_number: line number
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *s = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pstr, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (s != NULL)
	{
		if ((s->n >= 65 && s->n <= 90) || (s->n >= 97 && s->n <= 122))
			printf("%c", s->n);
		else
			break;
		s = s->next;
	}
	printf("\n");
	exit(EXIT_FAILURE);
}