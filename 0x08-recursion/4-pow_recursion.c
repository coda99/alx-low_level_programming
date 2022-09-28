#include "main.h"

/**
 * _pow_recursion - function to calculate the power of x
 *
 * @x: int number to raise
 * @y: int number for pow
 *
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

