#include "holberton.h"
/**
 * binary_to_uint - past num binary to decimal.
 * @b: pointer string.
 * Return: 0 if NULL or != 0,1 or num decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int total;

	i = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	j = 1;
	total = 0;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		total += (b[i] - 48) * j;

		j *= 2;
		i--;
	}
	return (total);
}
