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
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch % 10 + '0');
	}
	putchar('\n');

	return (0);
}
