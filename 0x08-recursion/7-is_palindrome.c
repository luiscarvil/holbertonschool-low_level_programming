#include "holberton.h"
/**
 *lenght - ccount an string and return lenght
 *@s: pointer.
 *Return: 0 or integer.
 */
int lenght(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (lenght(s + 1) + 1);
}
/**
 *aux_palin - auxiliar function palindrome
 *@s: pointer.
 *@cont: integer comparation.
 *Return: 0 or 1.
 */
int aux_palin(char *s, int cont)
{
	if (cont <= 1)
	{
		return (1);
	}
	else if (*s == *(s + cont - 1))
	{
		return (aux_palin(s + 1, cont - 2));
	}
			return (0);
}
/**
 *is_palindrome - return 1 if a string is a palindrome and 0 if not.
 *@s: pointer.
 *Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int cont = lenght(s);

	if (cont <= 1)
	{
		return (1);
	}
	return (aux_palin(s, cont));
}
