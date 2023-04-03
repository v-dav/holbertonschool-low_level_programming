#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a pointer to a list_t pointer
 * @str: a string of the node
 *
 * Return: the adress of the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
