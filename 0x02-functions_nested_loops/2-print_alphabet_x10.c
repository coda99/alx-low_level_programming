#include "main.h"

/**
 * print_alphabet_x10 - sends code to main for printing
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;
	
	do
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}while(i < 10);
}
