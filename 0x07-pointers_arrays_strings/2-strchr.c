#include <string.h>
#include "main.h"

/**
 * _strchr - fucntion that returns a pointer to the first occurence of c in string s else NULL if no char found
 * @s: string arg passed
 * @c: char to be returned
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
