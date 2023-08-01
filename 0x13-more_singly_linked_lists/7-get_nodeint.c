#include "lists.h"

/**
 * get_nodeint_at_index - locates and returns the nth node of a linked list.
 * @head: points to the head of the listint_t list.
 * @index: The index of the node to be located - indices start at 0.
 * Return: NULL if the node doesn't exist; else the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
