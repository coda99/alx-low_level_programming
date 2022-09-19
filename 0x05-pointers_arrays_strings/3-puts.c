#include "main.h"
#include <stdio.h>

/**
 * _puts - print string to stdout
 * @str: args
 *
 */

void _puts(char *str)
{
	int i = 0;

	for (i; i != '\0'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
