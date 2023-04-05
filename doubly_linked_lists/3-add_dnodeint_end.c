#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: a pointer to pointer that points to the dlistint_t list
 * @n: the integer contained in the dlistint_t list
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (temp == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
