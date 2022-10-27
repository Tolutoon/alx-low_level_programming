#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit
 *             to 0 ata given index.
 * @n: input number passed by a pointer.
 * @index: where to set the bit to zero.
 *
 * Return: on Success 1.
 *         otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n & (~mask);
	return (1);
}
