#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - return a ´pmter to a newly allocated space in memory.
 *@str: pointer array.
 *Return: Another array with str.
 */
char *_strdup(char *str)
{
	char *str2;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j <= i)
	{
		str2[j] = str[j];
		j++;
	}
	return (str2);
}
