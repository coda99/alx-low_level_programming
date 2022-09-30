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

	(void) *argv;
	printf("%d\n", argc-1);
	return (0);
}
