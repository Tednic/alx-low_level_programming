/*
 * Task : Write a function that returns the number of elements
 * in a linked list_t list.
 * Prototype: size_t list_len(const list_t *h);
 */

#include "lists.h"

/**
 * list_len - function returns the element counts in a linked list_t list.
 * @h: pointer h to the head of linked list_t list
 * Return: the number of elements (nodes) in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int node_count; /* counts the nodes in list_t */

	if (h == NULL)
		return (0);
	for (node_count = 1; h->next != NULL; node_count++)
		h = h->next;
	return (node_count);
}
