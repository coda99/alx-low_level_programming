#include <string.h>
#include "main.h"

/**
 * _strpbrk - fucntion that locates the first occurence in the string s of any of the bytes in the string accept
 * @s: string arg passed
 * @accept: char to be returned
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
