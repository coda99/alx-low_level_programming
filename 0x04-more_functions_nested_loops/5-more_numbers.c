#include "main.h"

/**
 * more_numbers - function to print numbers to stdout x10
 *
 * Return: 0
 */

void more_numbers(void)
{
	char i;
	int n = 0;

	do {
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		n++;
		putchar('\n');
	} while (n < 10);
}
