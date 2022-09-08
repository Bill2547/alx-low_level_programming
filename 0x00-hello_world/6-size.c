#include <stdio.h>

/**
 * Main - prints the size of the various types in the computer,
 * it is compiled on 
 * Return : 0 if the program ends successfully 
 */
int main(void)
{
	printf("size of a char:%d byte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d bytes(s)\n", sizeof(long int));
	printf("Size of a float:%D byte(s)\n", sizeof(float));
	
	return (0)
}
