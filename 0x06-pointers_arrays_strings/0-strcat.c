#include "holberton.h"
/**
 *_strcat - concatenates two strings.
 *@dest: pointer
 *@src: pointer
 *Return: 0.
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
