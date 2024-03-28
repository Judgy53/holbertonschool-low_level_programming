#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: head node of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}

	free(current);
}
