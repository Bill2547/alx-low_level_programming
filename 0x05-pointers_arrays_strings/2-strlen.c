#include "main.h"

/**
 * _strlen - gives the leght of a string
 * @s: the string to be counted
 * Return: o if successful
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
