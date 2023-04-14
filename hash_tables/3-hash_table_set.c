#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * In case of collision, add the new node at the beginning of the list.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node, *old_node = NULL;
	const char *old_value;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	/* check if key already exists and updates value */
	old_node = ht->array[index];
	for (; old_node != NULL; old_node = old_node->next)
	{
		if (strcmp(old_node->key, key) == 0)
		{
			old_value = old_node->value;
			old_node->value = strdup(value);
			free((void *)old_value);
			return (1);
		}
	}
	/* new node creation if key doesn't exists*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/*collision management by chaining */
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
