#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a pointer to a list_t pointer
 * @str: the strings stored in the node
 *
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_end = malloc(sizeof(list_t));

	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	new_end->len = strlen(str);
	new_end->next = NULL;

	if (temp == NULL)
		*head = new_end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
	}

	return (new_end);
}
