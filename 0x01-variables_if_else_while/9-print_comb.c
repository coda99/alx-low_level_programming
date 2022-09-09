#include <stdio.h>

/**
 * main- mother of all functions
 *
 * putchar: fuction to print characters to std out
 *
 * Return: 0 to compiler if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
