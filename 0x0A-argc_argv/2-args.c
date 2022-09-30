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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
