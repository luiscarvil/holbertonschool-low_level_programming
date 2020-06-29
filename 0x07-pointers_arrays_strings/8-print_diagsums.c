#include "holberton.h"
#include "stdio.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix.
 *@a: pointer matrix.
 *@size: integer sum.
 *return: nothing void.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 = n1 + a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		n2 = n2 + a[(size - 1) * (j + 1)];
	}
	printf("%i, %i\n", n1, n2);
}
