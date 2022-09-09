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
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
