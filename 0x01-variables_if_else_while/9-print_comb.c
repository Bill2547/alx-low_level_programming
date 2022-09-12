#include <stdio.h>

/**
 * main - prints all single digits number possible combinations separated by
 *  comma and a new line after
 *  Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
		if (n != 9)
		{ 
		  	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
