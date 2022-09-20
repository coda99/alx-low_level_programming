#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints secomd half og string
 * @str: arg
 */

void puts_half(char *str)
{
	double half = strlen(str) / 2;

	while (*(str + half) != '\0')
	{
		if (half % 2 != 0)
		{
			double odd = half_len  - 0.5;
			putchar(*(str + odd));
		}
		putchar(*(str + half));
		half_len++;
	}
}
