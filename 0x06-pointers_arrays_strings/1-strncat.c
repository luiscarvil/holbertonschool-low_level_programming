#include "holberton.h"
/**
 *_strncat - function concatenates two strings.
 *
 *Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;
	while (dest[a] != '\0')
	{
		a++;
	} 
		while (b < n && src[b] != '\0')
		{
			dest[a] = src[b];
		b++;
		a++;
		}
	return (dest);
}
