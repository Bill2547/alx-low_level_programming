#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc __atribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
