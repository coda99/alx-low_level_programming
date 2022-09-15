#include "main.h"

/**
 * most_numbers - function to print numbers to stdout x10
 *
 * Return: 0
 */

void more_numbers(void);
{
	char i;
	int n;

	for (i = 0; i < 15; i++)
	{
		while (n < 11)
		{
			_putchar(i + '0');
			n++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
