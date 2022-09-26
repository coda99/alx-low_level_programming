#include <string.h>
#include "main.h"

/**
 * _strspn - fucntion that gets the length of a prefix substring
 * @s: string arg passed
 * @c: char to be returned
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
