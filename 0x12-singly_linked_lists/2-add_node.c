#include "lists.h"
/**
 * add_node - add new node at the beginning of a list_t list.
 * @head: double pointer struct.
 * @str: pointer char.
 * Return: NULL or lista.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lista;
	int cont = 0;

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
	if (lista->str == NULL)
	{
		free(lista);
		return (NULL);
	}
	lista->len = cont;
	lista->next = *head;
	*head = lista;
	return (lista);
}
