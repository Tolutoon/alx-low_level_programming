#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i, j, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strcat = malloc((i * sizeof(char)) + ((j + 1) * sizeof(char)));

	if (strcat == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		strcat[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++, a++)
		strcat[a] = s2[b];

	strcat[a] = '\0';
	return (strcat);
}
