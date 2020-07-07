#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - array of chars with malloc
 *@size: size of array.
 *@c: char inicialized.
 *Return: array s or null.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(c));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	return (s);
}
