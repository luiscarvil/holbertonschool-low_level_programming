#include "lists.h"
/**
 *add_nodeint - add new node begin.
 *@head: pointer double.
 *@n: int const.
 *Return: lista or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lista;

	lista = malloc(sizeof(listint_t));
	if (lista == NULL)
	{
		return (NULL);
	}
	lista->n = n;
	lista->next = *head;
	*head = lista;
	return (lista);
}
