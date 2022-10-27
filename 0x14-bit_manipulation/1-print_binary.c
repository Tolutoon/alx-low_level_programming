#include "main.h"

/**
 * print_binary - function that prints the binary of a number.
 * @n: input number o be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}
	_putchar((n & 1) + 48);
}
