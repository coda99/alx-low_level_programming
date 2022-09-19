#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to print in reverse
 * @s: arg
 */
void print_rev(char *s)
{
	int end = _strlen(s) -1;
	while (end)
	{
		putchar(end);
		--end;
	}
	putchar('\n');
}
