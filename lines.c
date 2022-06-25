#include "main.h"

void check_lines(FILE *file)
{
	char *line;
	int num;

	while (fgets(line, MAX_BUFFER, file))
	{
		_test(line);
	}
}

void _test(char *line) {
	int divisor = -1;
	char *end;
	unsigned long number = strtoll(line, &end, 10);

	switch (line[strlen(line)-2]) {
		case '0':
		case '5':
			divisor = 5;
			break;
		case '2':
		case '4':
		case '6':
		case '8':
			divisor = 2;
			break;
		default:
			divisor = -1;
	}

	if (divisor == -1) {
		for (int i=0; i<PRIME_COUNT; i++)
			if (number%prime_numbers[i] == 0) {
				divisor = prime_numbers[i];
				break;
			}
	}

	if (divisor == -1) return;

	printf("%lu=%lu*%d\n", number, (number/divisor), divisor);
}

void init_prime_numbers()
{
	int i = 0;

	prime_numbers[i] = 3;
	i++;
	prime_numbers[i] = 7;
	i++;
	prime_numbers[i] = 11;
	i++;
	prime_numbers[i] = 13;
	i++;
	prime_numbers[i] = 17;
	i++;
	prime_numbers[i] = 19;
	i++;
	prime_numbers[i] = 23;
	i++;
	prime_numbers[i] = 29;
	i++;
	prime_numbers[i] = 31;
	i++;
	prime_numbers[i] = 37;
	i++;
	prime_numbers[i] = 41;
	i++;
	prime_numbers[i] = 43;
	i++;
	prime_numbers[i] = 47;
	i++;
	prime_numbers[i] = 53;
	i++;
	prime_numbers[i] = 59;
	i++;
	prime_numbers[i] = 61;
	i++;
	prime_numbers[i] = 67;
	i++;
	prime_numbers[i] = 71;
	i++;
	prime_numbers[i] = 73;
	i++;
	prime_numbers[i] = 79;
	i++;
	prime_numbers[i] = 83;
	i++;
	prime_numbers[i] = 89;
	i++;
	prime_numbers[i] = 97;
	i++;
}