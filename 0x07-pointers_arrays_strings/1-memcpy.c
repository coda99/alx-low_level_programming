#include <string.h>
#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte
 * @src: source of n bytes to copy
 * @dest: destination of n bytes copied
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
