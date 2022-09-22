#include "main.h"
#include <stdio.h>

/**
 * string_toupper - all lower chars to upper
 *
 * @str: arg
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		i++;
	}

	return (str);
}
