#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints the name
 * @name: name of the person
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
