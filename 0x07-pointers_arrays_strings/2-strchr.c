#include "holberton.h"
/**
 *_strchr - function that locates acharacter in a string.
 *@s: pointer string "hello"
 *@c: character to locates.
 *Return: null or s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
			return ('\0');
}
