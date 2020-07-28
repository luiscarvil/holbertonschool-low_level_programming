#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t lista = NULL;
	while (h != NULL)
	{
		if (h->n != '\0')
		{
			lista++;
		}
		h = h->next;
	}
	return (lista);
}