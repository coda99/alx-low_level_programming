#include <string.h>
#include "main.h"

/**
 * _strstr - fucntion that locates a substring
 * @haystack: string arg passed
 * @needle: string to be returned
 *
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
