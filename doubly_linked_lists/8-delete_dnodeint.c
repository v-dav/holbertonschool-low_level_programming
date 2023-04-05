#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * of a dlistint_t linked list
 * @head: a pointer to a pointer a first element of a dlistint_t list
 * @index: the index of the list where the node should be deleted
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free(temp);
			temp = NULL;
			(*head)->prev = NULL;
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			temp = NULL;
			return (1);
		}
	}

	while (index > 0)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		index--;
	}

	if (temp->next == NULL)
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		return (1);
	}

	temp2 = temp->prev;
	temp2->next = temp->next;
	temp->next->prev = temp2;

	free(temp);
	temp = NULL;

	return (1);
}
