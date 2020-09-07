#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: pointer head list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
