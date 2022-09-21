#include "main.h"

/**
 * _strcat - appends the src string to the dest string overwritting
 * the terminating numm byte (\0) at the end of dest
 * @dest: the string to append
 * @src: the string to be appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0
	j = 0

	while (dest[i] != '\0)
		i++;

	while (src[j] != '\0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
