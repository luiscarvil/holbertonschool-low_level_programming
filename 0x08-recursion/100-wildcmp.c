#include "holberton.h"
/**
 *wildcmp - compare two strings and return 1 identical, 0 otherwise.
 *@s1: pointer.
 *@s2: pointer.
 *Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2  && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1 + 1, s2 + 1))
		{
			return (1);
		}
		if (*(s1 + 1) != '\0' && *s2 == '\0')
		{
			return (0);
		}
	}
	return (0);

}
