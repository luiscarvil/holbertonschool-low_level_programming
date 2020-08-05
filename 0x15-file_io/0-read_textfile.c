#include "holberton.h"
/**
 * read_textfile - read and write files
 * @filename: file name pointer.
 * @letters: max letter id.
 * Return: readd or 0 null and error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0,
	    readd = 0,
	    writee = 0;
	char *buff;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	readd = read(fd, buff, letters);
	if (readd == -1)
	{
		free(buff);
		return (0);
	}
	writee = write(STDOUT_FILENO, buff, readd);
	if (writee == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (readd);
}
