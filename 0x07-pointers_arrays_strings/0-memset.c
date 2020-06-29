#include "holberton.h"
/**
 *_memset - funtion that fills memory with a constant byte.
 *@s: is a pointer.
 *@b: char.
 *@n: integer.
 *Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
