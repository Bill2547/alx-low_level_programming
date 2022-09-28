#include "main.h"

int find_sqrt(int n, int i);

/**
 * find_sqrt - returns the natural squareroot of a number
 * @num: the number to return squaretoot
 * @root: the root to be tested.
 * Return: -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
