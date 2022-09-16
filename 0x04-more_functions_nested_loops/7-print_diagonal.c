#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines to draw
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; ++i)
	{
		if (n <= 0)
			putchar('\n');
		else
		{
			putchar('\\');
			putchar('\n');

			for (j = 0 ; j < i; ++j)
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
