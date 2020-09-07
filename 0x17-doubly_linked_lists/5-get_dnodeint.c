#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer head list
 * @index: unsigned int index
 * Return: the nth node or NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head != NULL && index >= 1; index--)
	{
		head = head->next;
	}
	return (head);
}
