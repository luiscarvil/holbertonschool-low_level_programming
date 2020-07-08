#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - return pointer to a 2 dimensional arrays of integers.
 *@width: num rows.
 *@height: num columns.
 *Return: NULL or matrix.
 */
int **alloc_grid(int width, int height)
{

	int **point2dim;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	point2dim = (int **)malloc(sizeof(int *) * height);
	if (point2dim == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		point2dim[i] = malloc(sizeof(int) * width);
		if (point2dim[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(point2dim[j]);
			}
			free(point2dim);
			return (NULL);
		}
		i++;
	}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					point2dim[i][j] = 0;
				}
			}
		return (point2dim);
}
