#include "lists.h"
/**
 * add_node_end - add new node at the end of a list.
 * @head: double pointer.
 * @str: pointer.
 * Return: lista or NULL;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lista, *temp;
	int cont = 0;

	temp = *head;
	lista = malloc(sizeof(list_t));
	if (lista == NULL)
	{
		return (NULL);
	}
	while (str[cont] != '\0')
	{
		cont++;
	}
	lista->str = strdup(str);
	lista->len = cont;
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
	return (lista);
}
