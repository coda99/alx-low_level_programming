#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: pointer to the bit
 * @index: The index at which the value is at
 *
 * Return: -1 if err else The bit value at index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
