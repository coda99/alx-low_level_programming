#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function puts implemented with recursion
 *
 * @s: pointer to parameter passed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
