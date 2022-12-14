#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist of only one bytes from accept
 * @s: source string
 * @accept: searching string
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
