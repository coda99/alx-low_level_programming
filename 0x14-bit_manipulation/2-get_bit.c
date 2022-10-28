#include "main.h"

/**
 * get_bit - Gets the value oof a bit at a given index
 * @n: The bit
 * @index: The index at which the value is at
 *
 * Return: -1 if err else The bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
