#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list
 * @h: a pointer that points to the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *i = h;
	size_t len = 0;

	for (; i != NULL; i = i->next)
		len++;

	return (len);
}
