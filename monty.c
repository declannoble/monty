#include "monty.h"

/*
 * main - our main
 * @argc: number of arguments passed in call
 * @argv: ptr to the array of strings of our passed arguments
 * Return: is 0, or EXIT_FAILURE on error
 */

int main(int argc, char **argv)
{
	unsigned int line_number = 0, readflag = 0, i = 0, j = 0;
	size_t line_buf_size = 0;
	ssize_t line_size;
	char *newline = NULL;
	char *token = NULL, *token2 = NULL, *token3 = NULL;
	FILE *fp = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}

	line_size = getline(&newline, &line_buf_size, fp);
	while (line_size > 0)
	{
		line_number++;
		printf("line[%d]: chars=%ld, buf size=%lu, contents: %s\n", line_number, line_size, line_buf_size, newline);
		token = strtok(newline, " \n\r\t");
		if (token != NULL)
		{
			token2 = strtok(NULL, " \n\r\t");
			if (token2 != NULL )
				token3 = strtok(NULL, " \n\r\t");
		}
		else
		{
			token2 = NULL;
			token3 = NULL;
		}
		printf("token = %s, token2 = %s, token3 = %s\n", token, token2, token3);
/*		flag = function_caller(opcode, line_number); 
		if (flag == -1)
		{
			fprintf("L%d: unknown instruction %s\n", line_number, opcode);
			exit (EXIT_FAILURE);
		} */
		line_size = getline(&newline, &line_buf_size, fp);
	}
	fclose(fp);
	return (0);
}
