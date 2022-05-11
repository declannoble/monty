#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to beginning of stack
 *@line_number: line number
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *s = *stack;
	(void) line_number;

	while (s != NULL)
	{
		if (s->n == 0  || s->n < 0 || s->n > 127)
			break;
		if ((s->n >= 65 && s->n <= 91) || (s->n >= 97 && s->n <= 122 ))
			printf("%c", s->n);
		s = s->next;
	}
	printf("\n");
}
