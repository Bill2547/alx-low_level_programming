#include <stdio.h>

/**
 * main - prints all single digits number of base 10
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
