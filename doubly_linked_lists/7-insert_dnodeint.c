#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position
 * @h: a pointer to a first element of a dlistint_t list
 * @idx: the index of the list where the new node should be added
 * Index starts at 0
 * @n: the number contained in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = NULL;
	dlistint_t *temp2 = NULL;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		idx--;
	}

	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;

	new_node->prev = temp;
	new_node->next = temp2;

	return (new_node);
}
