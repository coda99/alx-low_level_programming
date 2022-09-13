#include "main.h"

/**
 * _islower - function to checl for lower chars
 *
 * @c: int val for argument
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
		return (0);
}
