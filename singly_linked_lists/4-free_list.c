#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: a pointer to a first element of a list_t list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *aux = current;

		current = current->next;
		free(aux->str);
		free(aux);
	}
}
