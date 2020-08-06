#include "holberton.h"
/**
 * main - program that copies the content of a file to another file.
 * @ac: counter arguments.
 * @av: pointer array arguments.
 * Return: 0 all success, exit error.
 */
int main(int ac, char **av)
{
	int fd, fd1, fr, fw, i = 1024;
	char buff[BUFFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		fr = read(fd, buff, i);
		fw = write(fd1, buff, fr);
	} while (fr == i);
	if (fr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]), exit(100);
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]), exit(100);
	return (0);
}
