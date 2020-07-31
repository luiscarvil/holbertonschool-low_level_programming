#include "holberton.h"
/**
 * get_bit - function that return the bit value of a given index.
 * @index: count position.
 * @n: num value.
 * Return: index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return (1 & (n >> index));
}
