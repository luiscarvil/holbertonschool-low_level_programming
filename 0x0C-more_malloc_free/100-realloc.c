#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - function that reallocates a memory block using malloc and free.
 *@ptr: pointer array space memory.
 *@old_size: old size of memory reallocates.
 *@new_size: new size of memory reallocates.
 *Return: NULL or ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if (new_size == old_size)
	{
	return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr2[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (ptr2);
}
