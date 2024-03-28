#include "8-print_array.h"
#include <stdio.h>

/**
 * print_array - prints n elements for an array of integer to stdout
 * @a: array of integer to print
 * @n: number of integer to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
			printf(", ");
		index++;
	}

	printf("\n");
}
