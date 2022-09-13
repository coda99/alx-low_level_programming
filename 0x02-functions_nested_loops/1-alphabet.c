#include "main.h"

/**
 * print_alphabet - sends code to main for printing
 *
 * Return: Alwasy 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
