#include "main.h"

/**
 * _strlen_recursion - returns the legth of a string
 * @s: the string to return the lenght of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (len += _strlen_recursion(s + 1));
}
