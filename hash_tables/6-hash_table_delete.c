#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table you want to delete
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current_node = NULL;
	hash_node_t *tmp = NULL;

	for (; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			tmp = current_node;
			current_node = current_node->next;
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
