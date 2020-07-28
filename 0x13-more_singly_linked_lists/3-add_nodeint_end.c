#include "lists.h"
/**
 *add_nodeint_end - add node end.
 *@head: pointer double.
 *@n: int const.
 *Return: NULL or *head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lista, *temp;

	temp = NULL;
	lista = malloc(sizeof(listint_t));
	if (lista == NULL)
	{
		return (NULL);
	}
	lista->n = n;
	lista->next = NULL;
	if (*head == NULL)
	{
		*head = lista;
		return (lista);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = lista;
	return (*head);
}
