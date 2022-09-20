#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print string to stdout
 * @str: args
 *
 */

void puts2(char *str)
{
	int len =  strlen(str);
	int try = len % 2;

	while (*str)
	{
		putchar(*(str + (try)));
		str++;
	}
	putchar('\n');
}
