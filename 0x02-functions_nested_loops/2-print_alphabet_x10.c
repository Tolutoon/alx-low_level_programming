#include "main.h"

/**
 * print_alphabet_x10 - Prints an alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		_putchar(c);
	}
	_putchar("\n");
}
