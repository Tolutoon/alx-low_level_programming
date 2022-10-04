#include "main.h"

/**
 * _memcpy - copies n byte fronm one memory area to another
 * @dest: memory area (destination)
 * @src: memory area (source)
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
