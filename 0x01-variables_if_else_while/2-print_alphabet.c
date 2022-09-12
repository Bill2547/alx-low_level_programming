#include <stdio.h>

/**
 * main - prints the char ch incrementally as lower case alphabet
 * Return: 0 if run successfully
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);

}
