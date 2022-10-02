#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes the character to stdio
 * @c: the character to print
 *
 * Return: on sucess1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
