#include "main.h"
#include <stdio.h>

/**
 * _puts - print string to stdout
 * @str: args
 *
 */

void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
