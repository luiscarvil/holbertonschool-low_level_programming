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
	int total = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", total);
		return (0);
	}
}
