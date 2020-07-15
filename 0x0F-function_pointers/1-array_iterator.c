#include "function_pointers.h"
/**
*array_iterator - parameter on each element of an array
*@array: pointer array.
*@size: int size array.
*@action: function print element.
*Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	count = 0;
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
