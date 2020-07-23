#include "lists.h"
/**
 * free_list - free main 4 list
 * @head: ponter char structure.
 * Return: nothing, void.
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	if (head->str != NULL)
	{
		free(head->str);
	}
	free(head);
}
