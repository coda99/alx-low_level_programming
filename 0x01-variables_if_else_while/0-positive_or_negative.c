#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - mother of all functions
 *
 * srand: function for initializing random generator
 *
 * rand: function for generating random numbers
 *
 * Return: 0 if everything okay
 * */
int main(void)
{
	int i = 0, n = 0;
	time_t t;

	/* Initializie random number generator */
	srand((unsigned int) time(&t));
	n = rand() - RAND_MAX / 2;

	/* Test for 0 */
	if (n > i)
	{
		printf("%d is positive\n", n);
	}
	else if (n < i)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
