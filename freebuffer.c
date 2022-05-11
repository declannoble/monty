#include "monty.h"

/**
 * freebuffer - frees the line buffer created by getline
 * @status: (unused)
 * @arg: a ptr to newline
 */
void freebuffer(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
