#include "lists.h"
/**
 * sum_listint - sum all the data(n) of a listint_t linked list.
 * @head: pointer struc.
 * Return total (data(n)).
 */
int sum_listint(listint_t *head)
{
	unsigned int total;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
