#include "lists.h"
/**
 * list_len - number of elements in a linked list_t.
 * @h: pointer list_t type.
 * Return: list.
 */
size_t list_len(const list_t *h)
{
	size_t list = NULL;

	while (h != NULL)
	{
		if ((*h).str != NULL)
		{
			list++;
			h = (*h).next;
		}
	}
	return (list);
}
