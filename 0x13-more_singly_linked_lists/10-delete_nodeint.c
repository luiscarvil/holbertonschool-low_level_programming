#include "lists.h"
/**
 * delete_nodeint_at_index - delete node the index.
 * @head: pointer head.
 * @index: uns int count.
 * Return: -1 if fail or 1 success.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (-1);
		}
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
