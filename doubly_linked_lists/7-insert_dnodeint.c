#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node in the list at index n
 * @h: pointer to the head node of the list
 * @idx: index to insert the new node
 * @n: new node value
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *parent = *h;
	dlistint_t *node = NULL;
	unsigned int list_index = 0;

	do {
		if (list_index == idx - 1)
			break;
		parent = parent->next;
		list_index++;
	} while (parent != NULL);

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = parent->next;
	node->prev = parent;

	parent->next = node;

	if (node->next != NULL)
		node->next->prev = node;

	return (node);
}
