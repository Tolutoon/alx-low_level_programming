#include<stdio.h>
/**
 * main - Prints all single digits of base 10 starting from 0
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 10; n < 20; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);

}
