#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - calculate the length of a linked list
 * @h: list containing all the elements to count
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h != NULL)
		return (1 + dlistint_len(h->next));

	return (0);
}
