#include "main.h"
#include <stdio.h>

/**
 * _puts - print string to stdout
 * @str: args
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
