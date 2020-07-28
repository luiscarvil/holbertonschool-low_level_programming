#include "lists.h"
/**
 *free_listint - free list.
 *@head: pointer struct.
 *Return: nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
