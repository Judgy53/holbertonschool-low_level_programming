#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a linked list
 * @head: head node of the list
 * @index: index of the node to find
 *
 * Return: node dlistint_t or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t **current = &head;
	unsigned int list_index = 0;

	if (head == NULL)
		return (NULL);

	do {
		if (list_index == index)
			return (*current);
		current = &((*current)->next);
		list_index++;
	} while (*current != NULL);

	return (NULL);
}
