#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
