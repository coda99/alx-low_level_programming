#include "main.h"
#include <stdio.h>

/**
 * _abs - returns the abs val of a num
 *
 * @n: arg for func
 *
 * Return: 0 always
 */

int _abs(int n)
{
	if(n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		n += (unsigned) n * 2;
		return (n);
	}
}
