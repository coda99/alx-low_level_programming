#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function to print in reverse
 * @s: arg
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}

	putchar('\n');
}
