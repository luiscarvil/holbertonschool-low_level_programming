#include "hash_tables.h"

/**
 * hash_table_print - print a hash table.
 * @ht: pointer hast table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c = 0;
	hash_node_t *tmp = NULL;
	int flg = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (c < ht->size)
	{
		tmp = ht->array[c];
		while (tmp)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flg = 1;
			tmp = tmp->next;
		}
		c++;
	}
	printf("}\n");
}
