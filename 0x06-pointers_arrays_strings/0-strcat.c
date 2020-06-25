#include "holberton.h"
/**
 *_strcat - function that print two strings concatenates.
 *@dest: pointer
 *@src: pointer
 *Return: 0 if all right.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
	dest[a + b] = src[b];
	b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
