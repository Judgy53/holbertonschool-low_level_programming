#include "4-print_rev.h"
#include "2-strlen.h"
#include "_putchar.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int index = _strlen(s) - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}

	_putchar('\n');
}
