#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: head node of the list
 * @n: new node value
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *parent = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	while (parent != NULL && parent->next != NULL)
		parent = parent->next;

	node->n = n;
	node->next = NULL;
	node->prev = parent;

	if (*head == NULL)
		*head = node;
	else
		parent->next = node;

	return (node);
}
