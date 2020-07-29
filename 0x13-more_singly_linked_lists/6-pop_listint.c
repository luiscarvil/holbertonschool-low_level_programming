#include "lists.h"
/**
 *pop_listint - delete the head string.
 *@head: double pointer
 *Return: 0 or head.
 */
int pop_listint(listint_t **head)
{
listint_t *lista;
int temp;
if (head == NULL || *head == NULL)
{
return (0);
}
lista = *head;
temp = lista->n;
free(lista);
return (temp);
}
