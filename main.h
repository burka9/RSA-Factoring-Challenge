#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 1024
#define PRIME_COUNT 23

extern int *prime_numbers;

void error_args(void);
void error_file(void);

void check_lines(FILE *file);
void _test(char *line);

void init_prime_numbers();

#endif