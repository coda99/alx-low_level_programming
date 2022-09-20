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

	while (*str)
	{
		putchar(*(str - 2));
		str++;
	}
	putchar('\n');
}
