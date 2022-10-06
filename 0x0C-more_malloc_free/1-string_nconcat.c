#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string whose length is to be found
 * Return: int
 */

unsigned int _strlen(char *s)
{
	unsigned int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string which is to be added to the first.
 * @n: number of bytes
 *
 * Return: Pointer or Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j;

	if (n < _strlen(s2))
	{
		m = malloc(_strlen(s1) + n * sizeof(char) + 1);
	}
	else
	{
		m = malloc(_strlen(s1) + _strlen(s2) + 1);
	}
	if (m == 0)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
	{
		m[i] = s2[j];
	}
	m[i] = '\0';
	return (m);
}

