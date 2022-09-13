#include "main.h"

/**
 * main -prints the alphabet in lowercase followed by annew line
 */

void print_alphabet(void)
{
	char ch;
	
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
