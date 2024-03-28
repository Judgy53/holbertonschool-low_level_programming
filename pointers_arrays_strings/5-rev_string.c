#include "5-rev_string.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char tmp;

	while (s[end] != '\0')
		end++;

	end--; /* Don't touch null char */

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
