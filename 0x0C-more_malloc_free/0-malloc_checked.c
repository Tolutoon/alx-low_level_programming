#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to the allocated memory
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
