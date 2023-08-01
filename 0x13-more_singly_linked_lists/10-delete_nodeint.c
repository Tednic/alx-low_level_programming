#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at an index of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: On success (1) else (-1) on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *duplicate = *head;
	unsigned int node;

	if (duplicate == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(duplicate);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (duplicate->next == NULL)
			return (-1);

		duplicate = duplicate->next;
	}

	temp = duplicate->next;
	duplicate->next = temp->next;
	free(temp);
	return (1);
}
