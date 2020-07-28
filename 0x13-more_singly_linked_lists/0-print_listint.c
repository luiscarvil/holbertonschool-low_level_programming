#include "lists.h"
/**
 *print_listint - print list int.
 *@h: pointer structure.
 *Return: lista.
 */
size_t print_listint(const listint_t *h)
{
	size_t lista = NULL;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	lista++;
	h = h->next;
	}
	return (lista);
}

