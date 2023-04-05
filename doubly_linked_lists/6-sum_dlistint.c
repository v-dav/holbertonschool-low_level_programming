#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: a pointer to a first element of a dlistint_t list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
