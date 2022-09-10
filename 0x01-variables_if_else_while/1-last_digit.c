#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generates a random number - Print the last digit of the number
 * Return: always (Success)
 */
int main(void)
{
	int n;
	int n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last = n % 10;

	if (n_last > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, n_last);
	else if (n_last == 0)
	printf("Last digit of %d is %d and is 0\n", n, n_last);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_last);

	return (0);

}
