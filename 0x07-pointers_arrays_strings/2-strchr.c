#include "holberton.h"
/**
 *_strchr - function that locates acharacter in a string.
 *@s: pointer string "hello"
 *@c: character to locates.
 *Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
		if (s[i] == c)
		{
			return (s + i);
		}
		else
		{
			return ('\0');
		}
}
