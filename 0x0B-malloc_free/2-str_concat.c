#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1: pointer first string.
 *@s2: pointer second string.
 *Return: concatenates strings.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	int a, b;
	char *conca;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	conca = malloc(sizeof(char) * (j + b + 1));
	if (conca == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= j)
	{
		conca[i] = s1[i];
		i++;
	}
	a = 0;
	while (a <= b)
	{
		conca[j + a] = s2[a];
		a++;
	}
	return (conca);
}
