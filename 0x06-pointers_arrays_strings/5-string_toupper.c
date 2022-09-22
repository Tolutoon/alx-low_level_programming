#include "main.h"
/**
 ** string_toupper - a function that changes all
 **                  lowercase letters of a string
 **		     to uppercase.
 **
 ** @w: pointer to input char
 **
 ** Return: @w
 */

char *string_toupper(char *w)
{
	int i = 0;

	while (w[i] != '\0')
	{
		if (w[i] >= 97 && w[i] <= 122)
			w[i] = w[i] - 32;
		i++;
	}
	return (w);
}
