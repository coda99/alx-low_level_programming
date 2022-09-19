#include "main.h"
#include <stdio.h>

/**
 * _puts - print string to stdout
 * @str: args
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	int i = 0;

	for (i; i != '\0'; ++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}