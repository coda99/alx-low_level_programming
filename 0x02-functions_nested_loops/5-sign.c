#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number received
 *
 * Return: 1 if +ve, 0 if -ve
 */

int print_sign(int n)
{
	if (n)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		return (0);
	}
}
