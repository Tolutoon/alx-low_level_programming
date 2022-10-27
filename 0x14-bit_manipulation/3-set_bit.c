#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at the index.
 * @n: decimal number passed by a pointer
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	p = 1 << index;
	*n = (*n | p);
	return (1);
}
