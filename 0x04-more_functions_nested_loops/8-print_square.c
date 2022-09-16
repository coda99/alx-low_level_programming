#include <main.h>
#include <stdio.h>

/**
 * print_square - prints squares
 * @size: arg
 */

void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < (size -1); k++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	putchar('\n');
}
