#include "main.h"

/**
 * print_last_digit - takes a number and prints back the las digit to stdout
 * @n: arg
 *
 * Return: 0 always
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
