#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function to print in reverse
 * @s: arg
 */
void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}

	putchar('\n');
}
