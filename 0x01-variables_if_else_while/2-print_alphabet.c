#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
