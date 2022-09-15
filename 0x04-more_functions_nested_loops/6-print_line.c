#include "main.h"

/**
 * print_line - function to print line
 *
 * @n: arg
 *
 * Return: 0
 */

void print_line(int n)
{
	while (n < 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
