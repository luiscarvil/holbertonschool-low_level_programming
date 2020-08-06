#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer name file
 * @text_content: pointer text file cont
 * Return: -1 error or 1 all good.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, agregar, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i]; i++)
	{
	}
	agregar = write(fd, text_content, i);
	if (agregar == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
