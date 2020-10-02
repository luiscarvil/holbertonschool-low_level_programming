#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer hash table
 * Return: nothing void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *aux_tmp = NULL, *node = NULL;

	while (i < ht->size)
	{
		aux_tmp = ht->array[i];
		while (aux_tmp != NULL)
		{
			node = aux_tmp->next;
			free(aux_tmp->value);
			free(aux_tmp->key);
			free(aux_tmp);
			aux_tmp = node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
