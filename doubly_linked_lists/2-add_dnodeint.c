#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: a pointer to pointer that points to the dlistint_t list
 * @n: the integer contained in the dlistint_t list
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
