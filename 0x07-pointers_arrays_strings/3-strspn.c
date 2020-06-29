#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: pointer inicial segment.
 *@accept: pointer n.
 *Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont, j, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				cont++;
			}
		}
		else
		{
			break;
		}
			i++;
	}
		return (cont);
}
