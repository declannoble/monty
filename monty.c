#include "monty.h"

/**
 * main - our main function
 * @argc: number of arguments passed in call
 * @argv: ptr to the array of strings of our passed arguments
 * Return: is 0, or EXIT_FAILURE on error
 */

int main(int argc, char **argv)
{
	int line_number = 0;
	size_t line_buf_size = 0;
	ssize_t line_size;
	char *newline = NULL, *token = NULL;
	FILE *fp = NULL;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	line_size = getline(&newline, &line_buf_size, fp);
	while (line_size > 0)
	{
		line_number++;
		token = strtok(newline, " \n\r\t");
		if (token != NULL)
		{
			if (token[0] != '#')
				function_caller(token, &stack, line_number);
		}
		line_size = getline(&newline, &line_buf_size, fp);
	}
	fclose(fp);
	free(newline);
	freestack(stack);
	return (0);
}
