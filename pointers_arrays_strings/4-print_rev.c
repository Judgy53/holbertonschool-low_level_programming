#include "_putchar.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;

	index--; /* Don't print null char */

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}

	_putchar('\n');
}
