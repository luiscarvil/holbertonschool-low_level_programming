#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array is the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 error or int number to search
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid = 0, left = 0, right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return ((int)mid);
	}
	return (-1);
}
