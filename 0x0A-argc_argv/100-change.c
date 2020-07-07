#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints minimum number of coints to make change for an amount of money.
 *@argc: counter
 *@argv: vector array.
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int value, count;

	count = 0;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		count = count + value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		count = count + value / 10;
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		count = count + value / 5;
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		count = count + value / 2;
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		count = count + value / 1;
	}
	printf("%d\n", count);
	return (0);
}
