#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string to 1377
 * @str: arg
 *
 * Return: 0
 */

char *leet(char *str)
{
	int i = 0, j;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', 'T'};

	while (*(str + i))
	{
		for (j = 0; j <= 7; j++)
		{
			if (*(str + i) == leet[j] || *(str + i) - 32 == leet[j])
				*(str + i) = j + '0';
		}

		i++;
	}

	return (str);
}
