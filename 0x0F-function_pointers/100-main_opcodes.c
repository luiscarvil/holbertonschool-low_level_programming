#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes main
 * @argc: count arguments.
 * @argv: array arguments.
 * Return: 0 all success or exit (1,2) error.
 */
int main(int argc, char *argv[])
{
	int count, j;
	char *func_main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	func_main = (char *)main;
	count = atoi(argv[1]);
	if (count < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (count > 0)
	{
		for (j = 0; j < (count - 1); j++)
		{
			printf("%02hhx ", func_main[j]);
		}
		printf("%02hhx\n", func_main[j]);
	}
	return (0);
}
