#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *lista;
	
	if (head != NULL)
	{
		while (*head != '\0')
		{
			lista = *head;
			*head = (*head)->next;
			free(lista);
		}
		*head = NULL;
	}
}