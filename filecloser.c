#include "monty.h"

/**
 * filecloser - closes the open file
 * @status: is void
 * @arg: a ptr to the file
 * Return: void
 */
void filecloser(int status, void *arg)
{
	FILE *fp;

	(void)status;
	fp = (FILE *)arg;
	fclose(fp);
}
