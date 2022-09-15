#include "main.h"
#include <stdio.h>

/**
 * main - printsnumbers from 1 to 100 followed by a new line
 * but for multiple of three prints fizzand for multiple of fives print
 * buzz and for both multiples print fizzbuzz
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	return (0);
}
