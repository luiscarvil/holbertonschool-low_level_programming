#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer numb.
 * @index: unsig int position to move.
 * Return: 1 success or -1 error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
