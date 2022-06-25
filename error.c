#include "main.h"

void error_args(void)
{
	fprintf(stderr, "Usage: factors <file_name>\n");
	exit(EXIT_FAILURE);
}

void error_file(void)
{
	fprintf(stderr, "Can't open file\n");
	exit(EXIT_FAILURE);
}