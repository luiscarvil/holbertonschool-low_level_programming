#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: int counter by av.
 *@av: array by arguments.
 *Return:  new array or null.
 */
char *argstostr(int ac, char **av)
{
	int i, j, a, b;
	char *p;

	a = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		a += j + 1;
	}
	p = malloc(sizeof(char) * a + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	b = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[b] = av[i][j];
			b++;
		}
		p[b] = '\n';
		b++;
	}
	p[b] = '\0';
	return (p);
}
