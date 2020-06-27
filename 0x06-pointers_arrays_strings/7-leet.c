#include "holberton.h"
/**
 *leet - function that encodes a string into 1337.
 *@s: pointer
 *Return: 0 Always.
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "a,e,o,t,l,A,E,O,T,L";
	char b[] = "4,3,0,7,1,4,3,0,7,1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
		{
			s[i] = b[j];
		}
		}
	}
return (s);
}
