#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 not found value or index success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (value == array[i])
		return (i);
		i++;
	}
	return (-1);
}
