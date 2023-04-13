#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 * 
 * Return: the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return(NULL);

    ht->size = size;
    ht->array = NULL;


    return(ht);    
}
