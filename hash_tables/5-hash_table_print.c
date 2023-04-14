#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table you want to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node = NULL;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				if ((i + 1) != ht->size)
					printf(", ");
				current_node = current_node->next;
			}
		}
		printf("}\n");
	}
}
