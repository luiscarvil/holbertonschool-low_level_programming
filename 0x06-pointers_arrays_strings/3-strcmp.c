#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1: pointer.
 *@s2: pointer.
 *Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == *s1)
		{
			return (0);
		}
		if (*s2 == *s2)
		{
			return (0);
		}
		if (*s1 == '\0')
		{
			return (0);
			s1++;
			s2++;
		}
	}
}
