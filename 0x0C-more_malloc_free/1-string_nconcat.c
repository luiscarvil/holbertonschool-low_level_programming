#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - concatenes 2 strings.
 *@s1: pointer array 1.
 *@s2: pointer array 2.
 *@n: int size.
 *Return: null or ptr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, w, w2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc((i + n + 1) * sizeof(char *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (w = 0; w <= i ; w++)
	{
		ptr[w] = s1[w];
	}
	for (w2 = 0; w2 < n; w2++)
	{
		ptr[i + w2] = s2[w2];
	}
	ptr[i + w2] = '\0';
	return (ptr);
}
