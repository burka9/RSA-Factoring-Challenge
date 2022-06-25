#include "main.h"

int *prime_numbers;

int main(int argc, char **argv)
{
	FILE *file;

	prime_numbers = malloc(sizeof(int) * PRIME_COUNT);

	if (prime_numbers == NULL)
		exit(EXIT_FAILURE);

	init_prime_numbers();

	if (argc != 2)
		error_args();

	file = fopen(argv[1], "r");

	if (file == NULL)
		error_file();

	check_lines(file);
	
	return 0;
}