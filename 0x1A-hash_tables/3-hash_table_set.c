#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 * @ht: pointer to hash table
 * @key: key about the node in the hash table
 * @value: value to the key.
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
