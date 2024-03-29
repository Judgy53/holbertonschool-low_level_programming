#include "lists.h"

/**
 * sum_dlistint - sum all the data of a linked list
 * @head: head node of the list
 *
 * Return: the sum as int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t **current = &head;
	unsigned int index = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	do {
		sum += (*current)->n;
		current = &((*current)->next);
		index++;
	} while (*current != NULL);

	return (sum);
}
