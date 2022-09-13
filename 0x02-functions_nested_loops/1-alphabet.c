#include "main.h"

/**
 * main -prints the alphabet in lowercase followed by annew line
 * Return:0 if run successfully
 */

void print_alphabet(void)
{
	
	char ch;

	ch='a';
	while (ch <='z')
	{
		_putchar(ch);
		ch++;
	}
	putchar('\n');
}
