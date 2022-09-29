#include <stdio.h>
#include <string.h>

/**
 * helper_rev - func to rev char[]
 *
 * @s: pointer to string param
 *
 * Return: 0
 *
 */

int helper_rev(char *s)
{
	if (*s != '\0')
	{
		helper_rev(s + 1);
		/*putchar(*s);*/
	}
	return (0);
}

/**
 * helper - func to print char[]
 *
 * @s: pointer to string param
 *
 * Return: 0
 */

int helper(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return (0);
	}
	/*putchar(*s);*/
	helper(s + 1);
	return (0);
}
/**
 * is_palindrome - func to check if word is palindrome
 *
 * @s: pointer to string param
 *
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	if (helper(s) == helper_rev(s))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
