#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to the char.
 * @c: constant.
 *
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
