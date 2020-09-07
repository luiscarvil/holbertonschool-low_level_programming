#include "lists.h"
/**
 * dlistint_len - return num elements in a linked list.
 * @h: poinrter to struct dlistint_t
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
		h = h->next;
	return (c);
}
