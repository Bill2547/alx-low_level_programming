#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be factorialised
 *
 * Return: -1 if number is less that 0
 */

int factorial(int n)
{
	int n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
