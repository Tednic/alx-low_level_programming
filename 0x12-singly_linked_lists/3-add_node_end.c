/*
 * Task: Write a function that adds a new node at the end of a list_t list.
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 */

#include "lists.h"
int len(const char *str);
list_t *create_new_node(const char *str);

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: points to the first node of a linked list.
 * @str: the string to be included in the node.
 * Return: the address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *node_new;

	temp = *head;
	if (head == NULL)
		return (NULL);
	node_new = create_new_node(str);
	if (node_new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_new;
	return (*head);
}

/**
 * create_new_node - function to reates a new node
 * @str: String to add to the created node
 * Return: A pointer to the allocated memory
 */
list_t *create_new_node(const char *str)
{
	list_t *node_new;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);
	node_new->str = strdup(str);
	node_new->len = len(str);
	node_new->next = NULL;
	return (node_new);
}

/**
 * len - function computes the string length
 * @str: a string constant that can't be modified by the function
 * Return: The length of the string
 */
int len(const char *str)
{
	int j;

	if (str == NULL)
		return (0);
	for (j = 0; str[j] != '\0'; j++)
		;
	return (j);
}
