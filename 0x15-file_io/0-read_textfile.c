#include "holberton.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0,
	    readd = 0,
	    writee = 0;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	if (!buff)
	{
		return (0);
	}
	readd = read(fd, buff, letters);
	writee = write(STDOUT_FILENO, buff, letters);
	if (writee == -1)
	{
		return (0);
	}
	free(buff);	
	close(fd);
	return (readd);
}