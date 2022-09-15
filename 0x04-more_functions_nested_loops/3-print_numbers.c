#include "main.h"

/**
 * Print_numbers - prints numbers from 0 to 9
 * Return: 1if Cis uppercase and 0 otherwise
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

