#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values
 * @a: first swap value
 * @b: second swap value
 */

void swap_int(int *a, int *b)
{
	int *temp = *a;
	*a = *b;
	*b = *temp;
}
