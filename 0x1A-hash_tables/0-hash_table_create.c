#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash tables.
 * @size: long array structure.
 * Return: new create table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT = NULL;

	hashT = calloc(1, sizeof(hash_table_t));
	if (hashT == NULL)
		return (NULL);
	hashT->array = calloc(size, sizeof(hash_node_t *));
	if (hashT->array == NULL)
	{
		free(hashT);
		return (NULL);
	}
	hashT->size = size;
	return (hashT);
}
