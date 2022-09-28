#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: the number to return squaretoot
 * Return: -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(_sqrt_recursion(n, 0));
}
