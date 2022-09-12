#include <stdio.h> 
/** 
 * main- assign a number to the variable n each time it is executed print whether the number stored is positve or negative 
 * return: 0 if program executed successfully 
 */

int main(void) 
{
	int n;
		
		if (n > 0)
			printf("%d is positive\n",n);
		else if (n == 0)
			printf("%d is zero\n",n);
		else if (n < 0)
			printf("%d is negative\n",n);
		return (0);
}
