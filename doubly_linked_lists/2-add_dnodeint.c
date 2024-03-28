#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: existing list of nodes
 * @n: new node value
 *
 * Return: pointer to the head of new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}
