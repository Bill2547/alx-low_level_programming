#include "main.h"

/**
 * _strcpy - copies the stringpointed to by srcincluding the terminationg
 * nullbyte (\0) to the buffer pointed to by dest
 * dest: pointer to buffer
 * src: pointer to buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
