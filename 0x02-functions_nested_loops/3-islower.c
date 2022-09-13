#include "main.h"

/**
 * _islower - function to checl for lower chars
 *
 * @c: int val for argument
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
		return (0);
}
