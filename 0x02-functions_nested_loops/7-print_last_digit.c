#include "main.h"

/**
 * print_last_digit - takes a number and prints back the las digit to stdout
 * @n: arg
 *
 * Return: 0 always
 */

int print_last_digit(int n)
{
	int i, t;

	if (n < 0)
	{
		t = n % (-10);
		t *= -1;

		return (t);
	} else
		return (n % 10);
}
