#include "main.h"

/**
 * print_most_numbers - function to print numbers to stdout
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
