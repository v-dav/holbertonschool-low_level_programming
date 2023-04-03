#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer that points to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *i = NULL;

	for (i = h; i != NULL; i = i->next)
	{
		if (i->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", i->len, i->str);
		size++;
	}
	return (size);
}
