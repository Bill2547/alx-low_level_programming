#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns natural squareroot
 * actual_sqrt_recursion - returns the natural squareroot of a number
 * @n: the number to return squaretoot
 * Return: -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurs the find the natural
 * @n: number to caculate
 * @i: iterator
 * Return: the squareoot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
