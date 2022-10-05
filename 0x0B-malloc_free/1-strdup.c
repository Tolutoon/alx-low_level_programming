#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string passed to the function
 *
 * Return: pointer of an array of char
 */

char *_strdup(char *str)
{
	char *pstr;
	int str_len, len, count;

	if (str == 0)
	{
		return (NULL);
	}
	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
		len = str_len;
	}
	pstr = malloc((len + 1) * sizeof(char));

	if (pstr == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		pstr[count] = str[count];
	}

	pstr[count] = '\0';
	return (pstr);
}
