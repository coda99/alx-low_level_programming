#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: pointer to the bit
 * @index: The index at which the value is at
 *
 * Return: -1 if err else The bit value at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
