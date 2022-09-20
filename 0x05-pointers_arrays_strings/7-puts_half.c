#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints secomd half og string
 * @str: arg
 */

void puts_half(char *str)
{
	int half = strlen(str) / 2;

	while (*(str + half) != '\0')
	{
		if (half % 2 != 0)
			putchar(*(str + (half - 1)));
		putchar(*(str + half));
		half++;
	}
	putchar('\n');
}
