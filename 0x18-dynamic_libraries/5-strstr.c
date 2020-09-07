#include "holberton.h"
/**
 *_strstr - function that locates substring.
 *@haystack: pointer 1.
 *@needle: pointer 2.
 *Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, k = 0, i = 0;

	while (needle[i])
	{
		i++;
	}
		if (needle == '\0')
		{
			return ("");
		}
		else if (i == 0)
		{
			return (haystack);
		}
	while (haystack[k])
	{
		if (needle[j] == haystack[k])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[k - j]);
			}
			j++;
		}
		else
		{
			j = 0;
		}
		k++;
	}
	return (0);
}
