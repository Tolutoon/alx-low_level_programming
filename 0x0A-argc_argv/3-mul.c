#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: holds the number of command arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - Success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
