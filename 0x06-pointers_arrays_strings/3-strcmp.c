#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1: pointer.
 *@s2: pointer.
 *Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
		return (s1[i] - s2[i]);
		}
		if (s1[i] == s1[i] || s2[i] == s2[i])
		{
			return (0);
		}
		s1++;
	}
	return (0);
}
