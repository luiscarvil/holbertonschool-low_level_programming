#include "lists.h"
/**
 * sum_dlistint - func that returns the sum of all the data (n) linked list.
 * @head: head pointer list
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
