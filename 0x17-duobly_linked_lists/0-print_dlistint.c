#include "lists.h"
/**
 * print_dlistint - print all elements of a dlistint_t list.
 * @h: poirnter to dlisntint_t struct.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (c);
}
