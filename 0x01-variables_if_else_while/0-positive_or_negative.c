#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a number to the variable int n each time it i
 * is executed print
 * whether the number stored is positve or negative
 * Return: 0 if program executed successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
