#include "main.h"

/**
 * _strcat - concatinates two strings
 *
 * @src: first string
 * @dest: second string
 *
 * Return: Dest as final result
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (i; *(src + i) == '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
