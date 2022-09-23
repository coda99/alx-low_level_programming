#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize words
 *
 * @str: arg
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i))
	{

		while (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
			i++;

		if (*(str + c) == ','  || *(str + c) == ';' || *(str + i) == '.' || *(str + i) == '!' || *(str + i) == '?' || *(str + i) == '"' || *(str + i) =='(' || *(str + i) == ')' || *(str + i) == '{' || *(str + i) == '}' || *(str + i) == '\t' || *(str + i) == '\n' || i == 0)
			*(str + i) -= 32;
		i++;
	}

	return (str);
}
