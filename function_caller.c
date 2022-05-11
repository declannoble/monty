#include "monty.h"

/**
 * function_caller - finds a function matching the opcode and executes it
 * @op_code: opcode to execute if found
 * @stack: a ptr to the stack
 * @line_number: current line number in the .m file
 *
 * Return: void
 */

void function_caller(char *op_code, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
	instruction_t fcode[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
/*		{"rotr", _rotr},*/
		{NULL, NULL}
	};

	while (fcode[i].opcode != NULL)
	{
		if (strcmp(fcode[i].opcode, op_code) == 0)
		{
			fcode[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op_code);
	exit(EXIT_FAILURE);
}
