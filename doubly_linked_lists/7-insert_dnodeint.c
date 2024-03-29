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
	dlistint_t *prev_node = NULL;
	dlistint_t *next_node = *h;
	dlistint_t *node = NULL;

	while (idx > 0 && next_node != NULL)
	{
		prev_node = next_node;
		next_node = next_node->next;
		idx--;
	}

	if (idx > 0)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = next_node;
	node->prev = prev_node;

	if (prev_node == NULL)
		*h = node;
	else
		prev_node->next = node;

	if (next_node != NULL)
		next_node->prev = node;

	return (node);
}
