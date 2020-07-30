#include "lists.h"
/**
 * insert_nodeint_at_index - isert node in position idx.
 * @head: pointer node.
 * @idx: position insert.
 * @n: integer.
 * Return: NULL or temp.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *posit;
	unsigned int count;

	if (head == NULL)
	{
	return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	posit = *head;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	for (count = 0; posit != NULL; count++)
	{
		if (count == (idx - 1))
		{
			temp->next = posit->next;
			posit->next = temp;
		}
		posit = posit->next;
	}
	return (temp);
}
