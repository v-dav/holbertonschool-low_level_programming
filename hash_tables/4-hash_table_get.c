#include "hash_tables.h"

/**
 * hash_table_get - a function that  retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	else
		return (NULL);
}
