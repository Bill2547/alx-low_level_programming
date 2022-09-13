#include "main.h"

/**
 *This prints the lower case alphabets incrimentally
 *print_alphabet- prints the alphabet in lowercase followed by annew line
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
