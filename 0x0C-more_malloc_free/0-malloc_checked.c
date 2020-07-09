#include "holberton.h"
#include <stdlib.h>

/**
*malloc_checked - allocated memory using malloc.
*@b: unsigned int.
*Return: pointer p or exit 98.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
