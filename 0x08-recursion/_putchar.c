#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to wrte
 *
 * return: 1 on sucess
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
