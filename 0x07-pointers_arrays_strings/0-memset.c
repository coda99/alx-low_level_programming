#include <string.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to b
 * @b: byte to fill memory with
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
