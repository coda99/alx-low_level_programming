#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints in reverse using recursion
 *
 * @s: pointer to string param
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

