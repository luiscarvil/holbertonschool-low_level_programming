#include "holberton.h"
/**
 *_strncpy - function that copies a string
 *@dest: pointer.
 *@src: pointer
 *@n: integer.
 *Return: 0 if it is right.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
