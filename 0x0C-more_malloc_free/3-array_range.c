#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - array of integers.
 *@min: integer begin.
 *@max: integer end.
 *Return: NULL or pointer newly.
*/
int *array_range(int min, int max)
{
int *p;
int j;
if (min > max)
{
return (NULL);
}
else
{
p = malloc((max - min) + 1);
if (p == NULL)
{
return (NULL);
}
for (j = 0; j < (max - min); j++)
{
p[j] = min++;
}
return (p);
}
}
