#include "hash_tables.h"

/**
 * hash_table_get - get key/value
 * @ht: pointer to hash table structure.
 * @key: key to match
 * Return: succes or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	if (ht != NULL && key != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		if (tmp == NULL)
			return (NULL);
	}
	while (strcmp(tmp->key, key))
		tmp = tmp->next;
	return (tmp->value);
}
