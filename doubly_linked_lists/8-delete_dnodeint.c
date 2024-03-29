#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete the node in the list at index n
 * @head: pointer to the head node of the list
 * @idx: index to delete new node
 *
 * Return: 1 if deletion succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL) /* if head is null, list doesn't exists */
		return (-1);

	while (index > 0 && node != NULL) /* find the node to delete */
	{
		node = node->next;
		index--;
	}

	if (index > 0) /* if index is still above 0, index is OOB, so no deletion */
		return (-1);

	if (node->prev != NULL) /* if previous node exists, link it with next node */
		node->prev->next = node->next;
	else /* if previous node doesn't exists, set the head to next node */
		*head = node->next;

	if (node->next != NULL) /* Link next node with previous node */
		node->next->prev = node->prev;

	free(node);

	return (1);
}
