#include "main.h"
#include <string.h>

/**
 * _strncpy - concatinates two strings with n bytes
 *
 * @src: first string
 * @dest: second string
 * @n: third arg
 *
 * Return: Dest as final result
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
