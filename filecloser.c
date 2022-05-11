#include "monty.h"

/**
 *
 *
 *
 */
void filecloser(int status, void *arg)
{
	FILE *fp;

	(void)status;
	fp = (FILE *)arg;
	fclose(fp);
}
