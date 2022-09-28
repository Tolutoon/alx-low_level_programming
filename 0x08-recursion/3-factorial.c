#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number whose factorial would be found.
 *
 * Return: factorial of number, which is an integar.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
