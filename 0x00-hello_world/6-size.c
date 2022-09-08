#include <stdio.h>

/**
 * main - mother of all functions
 *
 * sizeof: returns size of types
 *
 * Return: 0 is +v else err msg
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)", sizeof(char));
	printf("Size of an int: %d bytes(s)", sizeof(int));
	printf("Size of a long int: %d bytes(s)", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("Size of a float: %d bytes(s)", sizeof(float));

	return (0);
}
