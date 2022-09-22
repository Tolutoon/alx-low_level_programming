#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 *                  of a string to uppercase.
 * @p: pointer to input character
 * Return: @p
 */

char *string_toupper(char *p)
{
	int i;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] = p[i] - 32;
		i++;
	}
	return (p);
}
