#include "holberton.h"
/**
 *_number_prime - take 2 number and compare.
 *@n: integer 1.
 *@a: integer 2.
 *Return: number o 0;
 */
int _number_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (_number_prime(n, a - 1));
}
/**
 *is_prime_number - input integer is a prime number.
 *@n: integer.
 *Return: 0 or 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_number_prime(n, n - 1));
}
