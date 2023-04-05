#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all the elements of dlistint_t list
 * @h: a pointer that points to the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *i = h;

	for (; i != NULL; i = i->next)
	{
		printf("%d\n", i->n);
		size++;
	}

	return (size);
}
