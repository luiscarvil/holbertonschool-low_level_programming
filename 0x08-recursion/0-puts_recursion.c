#include "holberton.h"
/**
 *_puts_recursion - function that prints a string, followed by a new line.
 *@s: pointer
 *return: 0 if is good
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
