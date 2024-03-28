#include "7-puts_half.h"
#include "_putchar.h"

/**
 * puts_half - prints the second half of a string to stdout
 * @str: string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int index, length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		index = length / 2;
	else
		index = (length + 1) / 2;

	while (index < length)
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
