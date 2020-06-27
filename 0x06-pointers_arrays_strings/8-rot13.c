#include "holberton.h"
/**
 *rot13 - function that encodes a string using rot13.
 *@s: pointer
*Return: always 0.
  */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
			s[i] = b[j];
			break;
			}
		}
		i++;
	}
	return (s);
/*
 *int i;
 *
 *i = 0;
 *while (s[i] != '\0')
 *{
 *	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
 *	{
 *		if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
 *		{
 *			s[i] = s[i] - 13;
 *		}
 *		else
 *		{
 *			s[i] = s[i] + 13;
 *		}
 *		i++;
 *	}
 *	i++;
 *}
 *return (s);
*/
}
