#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a list at a position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 * Return: NULL if the function fails; else the location of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *duplicate = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = duplicate;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (duplicate == NULL || duplicate->next == NULL)
			return (NULL);

		duplicate = duplicate->next;
	}

	new_code->next = duplicate->next;
	duplicate->next = new_node;

	return (new_node);
}
