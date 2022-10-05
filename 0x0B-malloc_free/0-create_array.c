#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: stored char
 * Return: pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int count;

	cr = malloc(size * sizeof(c));

	if (size == 0 || cr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		cr[count] = c;
	}
	return (cr);
}
