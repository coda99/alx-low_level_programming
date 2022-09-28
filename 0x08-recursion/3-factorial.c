#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of given input n
 *
 * @n: integer param
 * Return: result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (factorial(n - 1) * n);
}
