#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - takes a number and prints back the las digit to stdout
 * @n: arg
 *
 * Return: 0 always
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = n % (-10);
		i *= -1;

		printf("%d%d", i, i);
	} else
	{
		i = (n % 10);
		printf("%d%d", i, i);
	}
}
