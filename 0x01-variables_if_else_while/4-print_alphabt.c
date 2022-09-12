#include <stdio.h>

/**
 * main - printslower case alpahted ot char ch except q and e
 * Return: 0 when successful
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
