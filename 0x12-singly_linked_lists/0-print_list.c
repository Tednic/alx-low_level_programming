/*
 * Task: Write a function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 */

#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to a struct of type list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count_node; /* create node count variable */
	/* it keeps count of the number of nodes in the linked list */

	if (h == NULL) /* checks if h pointer is null */
		return (0); /* if null, the list is empty */
	for (count_node = 1; h->next != NULL; i++)
	{ /* loop iterates over the nodes in yhe list */
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (count_node);
}
