#include<stdio.h>

/**
 * main - Prints alphabets in lower case - then in upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	return (0);
}
