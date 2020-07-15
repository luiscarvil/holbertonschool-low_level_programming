#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that print name
 * @name: print name.
 * @f: point function
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || f)
	{
		f(name);
	}
}
