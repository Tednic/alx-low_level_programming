#include "lists.h"

/**
 * listint_len - returns the node counts in a linked listint_t list.
 * @h: a pointer to the head of the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
