#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: pointer inicial segment.
 *@accept: pointer n.
 *Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont = 0, j, i;

	for (; s[i] != '\0'; i++)
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
	}
		return (cont);
}
