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
	listint_t *new_node, *temp, *temp_old;
	unsigned int node;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (node = 0; node < idx - 1 && temp != NULL && idx != 0; node++)

		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_node;
		new_node->next = temp_old;
	}
	return (new_node);
}
