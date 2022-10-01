#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 * @argc: holds the number of command line arguments
 * @argv: array that contains the programme command line arguments.
 * Return: 0 - Success.
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
