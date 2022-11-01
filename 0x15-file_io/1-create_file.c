#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file to be created.
 * @text_content: Content to be written in the file.
 * Return: 1 on Success, -1 on Failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, rw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	rw = write(fd, text_content, i);
	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}
