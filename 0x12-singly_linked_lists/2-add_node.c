/*
 * Task: Write a function that adds a new node
 * at the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 */

#include "lists.h"

/**
 * len_str - computes length of string
 * @str: a constant string that can't be modified
 * Return: the length of string str
 */

int len_str(const char *str); /* returns the string length */

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to the head of list_t
  * @str: string associated with a node
  * Return: the address of the new node/element. NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	if (head == NULL)
		return (NULL);
	node_new = malloc(sizeof(list_t)); /* memory for new node allocated */
	if (node_new == NULL)
		return (NULL); /* if mem allocation fails */

	if (*head == NULL) /* set next pointer of new node to NULL if list is empty */
		node_new->next = NULL;
	else
		node_new->next = *head;
	/* else, sets next pointer of new node to point to current head of list */
	node_new->str = strdup(str);
	/* copies string parameter to the new node, & computes its length */
	node_new->len = len_str(str);
	*head = node_new;
	return (*head); /* returns the new head of the list */
}

/**
  * len_str - computes length of string
  * @str: a constant string that can't be modified
  * Return: the length of string str
  */

int len_str(const char *str)
{
	int j; /*j loops through the string characters */

	if (str == NULL) /* str doesn't points to a memory address */
		return (0); /* str has zero length */
	for (j = 0; str[j] != '\0'; j++)
		;
	/* loop iterates over string characters */
	return (j); /* string length is returned */
}
