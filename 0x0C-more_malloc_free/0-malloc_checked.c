#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input integar
 *
 * Return: pointer of the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *bptr;

	bptr = malloc(b);

	if (bptr == NULL)
	{
		exit(98);
	}
	return (bptr);
}
