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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar('\n');
	}
	putchar('\n');

	return (0);
}
