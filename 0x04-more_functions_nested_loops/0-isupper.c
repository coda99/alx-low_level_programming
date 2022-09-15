#include "main.h"

/**
 * _isupper - function to check for upper chars
 *
 * @c: int val for argument
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
