#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: points to the address of the head of the listint_t list.
 * Return: zero for empty linked list, else the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_head_node;

	if (*head == NULL)
		return (0);

	temp = *head;
	data_head_node = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data_head_node);
}
