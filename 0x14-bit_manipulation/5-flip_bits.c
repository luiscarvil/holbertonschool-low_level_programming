#include "holberton.h"
/**
 * flip_bits - bits you would need to flip to get from one number to another.
 * @n: fist number.
 * @m: second numb.
 * Return: j or 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int add, j;

	add = 0;
	j = 0;
	add = n ^ m;
	while (add != 0)
	{
		if (1 == (add & 1))
		{
			j++;
		}
		add = add >> 1;
	}
	return (j);
}
