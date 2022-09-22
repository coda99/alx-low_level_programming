#include "main.h"
#include <string.h>

/**
 * _strncat - concatinates two strings with n bytes
 *
 * @src: first string
 * @dest: second string
 * @n: third arg
 *
 * Return: Dest as final result
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
