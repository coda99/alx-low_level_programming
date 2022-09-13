#include "main.h"

/**
 * _abs - returns the abs val of a num
 *
 * @n: arg for func
 *
 * Return: 0 always
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n + (n * 2);
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
		return (0);
}
