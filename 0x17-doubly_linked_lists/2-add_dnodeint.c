#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning
 * @head: pointer head node.
 * @n: value int struct.
 * Return: address of the new element or NULL failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node = NULL;

	if (head == NULL)
		return (NULL);
	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	if (*head == NULL)
	{
		add_node->prev = *head;
		*head = add_node;
		add_node->next = NULL;
	}
	else
	{
		add_node->next = *head;
		*head = add_node;
		add_node->prev = NULL;
		add_node->next->prev = add_node;
	}
	return (add_node);
}
