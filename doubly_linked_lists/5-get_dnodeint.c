#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: a pointer to a first element of a dlistint_t list
 * @index: is the index of the node, starting from 0
 *
 * Return: the address of the nth node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	return (temp);
}
