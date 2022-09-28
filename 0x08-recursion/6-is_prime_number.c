#include "main.h"
/**
 * helperFunc - returns 0 or 1
 * @num: num to check
 * @i: possible factor of the num
 *
 * Return: 0 if not prime, else 1
 */

int helperFunc(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunc(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if num is prime
 * @n: num param
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (helperFunc(n, 2));
}
