#include "lists.h"
/**
 * print_list -print all the elements of a list_t list.
 * @h: pointer list.
 * Return: list;
 */
size_t print_list(const list_t *h)
{
	size_t list = NULL;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		list++;
		h = (*h).next;
	}
	return (list);
}
