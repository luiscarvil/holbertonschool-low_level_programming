#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of string.
 *@s: integer.
 *Return: 0 Always.
 */
char *cap_string(char *s)
{
	int i = 1, j;
	char t[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	while (s[i] != '\0')
	{
		for (j = 0; t[j] != '\0'; j++)
		{
			if (s[i - 1] == t[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
				s[i] = s[i] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
