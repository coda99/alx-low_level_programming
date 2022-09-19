#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function to print in reverse
 * @s: arg
 */
void print_rev(char *s)
{
	int end = strlen(s) - 1;
	while (end)
	{
		putchar(*s);
		--*s;
	}
	putchar('\n');
}
