#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers
 *@argc : counter nub arguments passed.
 *@argv: argument vector.
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		total = total + atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
