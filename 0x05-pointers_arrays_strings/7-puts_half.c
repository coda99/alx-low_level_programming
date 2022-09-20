#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints secomd half og string
 * @str: arg
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 != 0)
	{
		int odd = (len - 1) / 2;
		while (*(str + odd) != '\0')
		{
			putchar(*(str + odd));
			odd++;
		}
		putchar('\n');
	}

	else
	{
		int half = len / 2;
		while (*(str + half) != '\0')
		{
			putchar(*(str + half));
			half++;
		}
		putchar('\n');
	}
}
