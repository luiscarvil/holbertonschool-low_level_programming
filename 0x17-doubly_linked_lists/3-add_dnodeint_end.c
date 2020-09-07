#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the end list.
 * @head: dlistint_t pointer node.
 * @n: pointer value struct.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node, *endn;
	int i = 0;

	endn = *head;
	if (head == NULL)
		return (NULL);
	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (0);
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		add_node->prev = NULL;
		*head = add_node;
		return (add_node);
	}
	while (endn->next != NULL)
	{
		endn = endn->next;
		i++;
	}
	endn->next = add_node;
	add_node->prev = endn;
	return (add_node);
}
