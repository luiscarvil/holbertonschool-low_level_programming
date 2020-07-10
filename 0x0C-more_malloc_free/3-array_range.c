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
int j, cont;
if (min > max)
{
return (NULL);
}
else
{
for (cont = 0; cont < (max - min); cont++)
{

}
p = malloc(sizeof(int) * (cont + 1));
if (p == NULL)
{
return (NULL);
}
for (j = 0; j <= cont; j++)
{
p[j] = min++;
}
return (p);
}
}
