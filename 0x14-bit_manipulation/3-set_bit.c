#include "holberton.h"
/**
 * set_bit - set bit the value of a bint to 1 at a given index.
 * @n: pointer num n.
 * @index: index positions to move.
 * Return: 1 succes or -1 in error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
