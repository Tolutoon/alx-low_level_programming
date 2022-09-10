#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - main block
 * if statements
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("The number is positive");
        }
	if (n == 0)
       	{
		printf("The number is zero");
	}
        if (n < 0)
	{	
		printf("The number is negative");
	}
	return 0;
}
