#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: Zero if the list is empty; else the sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
