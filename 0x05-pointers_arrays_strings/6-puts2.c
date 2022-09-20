#include "main.h"
#include <stdio.h>

/**
 * puts2 - print string to stdout
 * @str: args
 *
 */

void puts2(char *str)
{
	while (*str)
	{
		putchar(*(str / 2));
		str++;
	}
	putchar('\n');
}
