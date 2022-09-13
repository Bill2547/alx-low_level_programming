#include "main.h"

/**
print_alphabet_x10 - prints the alphabet ten times in a row
*/

void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 1;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
