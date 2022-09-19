#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @s: args
 *
 * Return: 0 always
 */

int _strlen(char *s)
{
	char *temp;
	int i = 0;

	for (temp = s; *temp != '\0'; temp++)
	{
		i++;
	}

	return (i);
}
