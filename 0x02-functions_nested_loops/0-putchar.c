#include <unistd.h>

/**
 * main - prints _putchar followed by a new line 
 * Return: 0 if run successfully 
 */

int_putchar (char c)
{
	return (write (1, &c, 1));

}
