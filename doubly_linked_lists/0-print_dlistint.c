#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: list containing all the elements to print
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h != NULL)
	{
		printf("%d\n", h->n);
		return (1 + print_dlistint(h->next));
	}

	return (0);
}
