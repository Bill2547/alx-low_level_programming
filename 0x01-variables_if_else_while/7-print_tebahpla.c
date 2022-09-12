#include <stdio.h>

/**
 *main - prints char ch in lowercase in reverse
 *Return: 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
