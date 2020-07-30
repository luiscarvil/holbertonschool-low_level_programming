#include "lists.h"
/**
 * get_nodeint_at_index - return the nth of a listint_t liked list.
 * @head: pointer struct.
 * @index: unsig int count.
 * Return: NULL or head.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
		{
		return	(NULL);
		}
		head = head->next;
	}
	return (head);
}
