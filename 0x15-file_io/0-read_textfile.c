#include "main.h"

/**
 * read_textfile - function that reads and prints out the output.
 * @filename: File to be read and printed.
 * @letters: number of letters to be printed.
 *
 * Return: number of letters to be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters + 1);
	nr = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	if (nr == -1 || nw == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (nw);
}

