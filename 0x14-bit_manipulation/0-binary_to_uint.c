#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to strings of 0's and 1's char.
 *
 * Return: the converted number or 0 if
 * char is not between 0 and 1 or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int base_ten = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		base_ten = 2 * base_ten + (b[i] - '0');
	}
	return (base_ten);
}
