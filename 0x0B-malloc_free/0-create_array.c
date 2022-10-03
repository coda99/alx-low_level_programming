#include "main.h"
#include <stdlib.h>

/**
 * create_array - func to create array
 * @size: size of array
 * @c: char
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	/* check if malloc is 0 */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
