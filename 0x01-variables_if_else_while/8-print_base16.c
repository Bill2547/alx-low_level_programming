
#include <stdio.h>

/**
 *main - prints char ch  and int n for numbers base 16
 *Return: 0 if successful
 */

int main(void)
{
	char ch;
	int n;


	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
