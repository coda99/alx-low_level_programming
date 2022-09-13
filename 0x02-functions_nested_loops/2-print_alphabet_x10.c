#include "main.h"

/**
 * print_alphabet_x10 - sends code to main for printing
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch) * 10;
	}

	_putchar('\n');
}
