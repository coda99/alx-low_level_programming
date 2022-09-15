#include "main.h"

/**
 * _isdigit - function to check for numbers
 *
 * @c: int val for argument
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >=  0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
