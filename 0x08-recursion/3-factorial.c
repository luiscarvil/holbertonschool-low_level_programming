#include "holberton.h"
/**
 *factorial - fonction that returns the fatorial of a given number.
 *@n: pointer
 *Return: value factorial.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
return (n * factorial(n - 1));
}
