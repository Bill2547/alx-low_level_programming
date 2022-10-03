#include "main.h"
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: the string to be combined
 * @s2: the string to be combinde to s1
 *
 * Return: pointer to new memory s1 then s2 
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, len = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == 0)
		return (0);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
