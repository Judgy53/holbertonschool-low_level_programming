#include "6-puts2.h"
#include "_putchar.h"

/**
 * puts2 - prints every other character of a string to stdout
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
