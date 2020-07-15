#include "function_pointers.h"
/**
 * int_index - search for an integer.
 * @array: array elements.
 * @size: size array.
 * @cmp: pointer function.
 * Return: -1 or count.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]) != 0)
			{
				return (count);
			}
		}
	return (-1);
}
