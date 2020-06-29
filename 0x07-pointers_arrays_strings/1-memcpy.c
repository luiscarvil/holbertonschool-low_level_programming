#include "holberton.h"
/**
 *_memcpy - function that copies memory area.
 *@dest: pointer 1.
 *@src: pointer 2.
 *@n: integer.
 *Return: values memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
