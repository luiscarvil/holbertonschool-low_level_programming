#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: pointer
 *@n: int
 *Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	n = n - 1;
	while (i <= n)
	{
		j = a[n];
		a[n] = a[i];
		a[i] = j;
		n--;
		i++;
	}
}
