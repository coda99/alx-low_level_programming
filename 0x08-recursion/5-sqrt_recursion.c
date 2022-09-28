#include "main.h"
/**
 * helperFunc - checks if sqrt num exists
 *
 * @num: number
 * @pSqrt: possible sqrt of num
 *
 * Return: sqrt of num or -1 if fail
 *
 */

int helperFunc(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunc(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - function to calculate sqrt of n
 * @n: num passed
 *
 * Return: sqrt of n, -1 if n don't have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helperFunc(n, 0));
}
