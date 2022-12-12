#include "main.h"

/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer for destination
 * @src: pointer for source
 * @n: number of bytes it should not be more than
 * Return: The pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len++] = src[i];
	dest[dest_len++] = '\0';
	return (dest);
}
