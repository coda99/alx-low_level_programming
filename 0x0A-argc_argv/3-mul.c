#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - mother of all funcs
 * @argc: arg count
 * @argv: pointer to char arrays
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	for (i = 1; i < argc; i++)
	{
		prod *= atoi(argv[i]);
	}

	printf("%d\n", prod);

	return (0);
}
