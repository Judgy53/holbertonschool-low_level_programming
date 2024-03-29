#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a valid password for 101-crackme to stdout
 *
 * Return: Always 0.
 */
int main(void)
{
	int target = 0xad4;
	int current = 0;
	int mod = 127;
	int c;

	srand(time(NULL));

	while (current < target)
	{
		c = rand() % (mod + 1);
		if (c == '\0')
			continue;
		putchar(c);
		current += c;
		if (target - current < mod)
			mod = target - current;
	}

	return (0);
}
