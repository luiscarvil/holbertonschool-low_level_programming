#include "holberton.h"
/**
 *_strncat - function concatenates two strings.
 *@dest: pointer
 *@src: pointer
 *@n: int
 *Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
		for (j = 0; j < n && src[j] != '\0'; j++)
		{
		dest[i] = src[j];
			i++;
		}
	return (dest);
}
