#include "hash_tables.h"
/**
 * key_index - write a function that gives you the index if a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the index al which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
