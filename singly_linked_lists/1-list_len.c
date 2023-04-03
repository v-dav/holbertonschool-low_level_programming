#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: a pointer to a linked list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *i = NULL;
	size_t len = 0;

	for (i = h; i != NULL; i = i->next)
		len++;

	return (len);
}
