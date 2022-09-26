#include <string.h>
#include "main.h"

/**
 * _strspn - fucntion that gets the length of a prefix substring
 * @s: string arg passed
 * @accept: char to be returned
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
