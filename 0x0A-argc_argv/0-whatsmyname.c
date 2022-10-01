#include <stdio.h>

/**
 * main - a program that prints its name.
 *
 * @argc: number of command arguments.
 * @argv: array that contains the program command
 *        line arguments.
 * Return: 0 - Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
