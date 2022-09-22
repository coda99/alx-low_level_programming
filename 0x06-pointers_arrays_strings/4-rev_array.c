#include "main.h"
#include <stdio.h>

/**
 * reverse_array - concatinates two strings with n bytes
 *
 * @a: first arg
 * @n: second arg
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
