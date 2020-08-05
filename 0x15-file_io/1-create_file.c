#include "holberton.h"
/**
 * create_file - file with text
 * @filename: pointer name file
 * @text_content: pointer text file cont
 * Return: -1 error or 1 all good.
 */
int create_file(const char *filename, char *text_content)
{
	int arch = 0,
	    writee = 0,
	    i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	arch = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (arch == -1)
	{
		return (-1);
	}
	while (text_content[i])
	{
		i++;
	}
	writee = write(arch, text_content, i);
	if (writee == -1)
	{
		return (-1);
	}
	close(arch);
	return (1);
}
