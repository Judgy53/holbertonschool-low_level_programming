/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: string converted as integer
 */
int _atoi(char *s)
{
	int index = 0;
	int result = 0;
	int negative = 0;
	int parsing_started = 0;
	int to_add = 0;

	while (*(s + index) != '\0')
	{
		char c = *(s + index);

		if (c >= '0' && c <= '9')
		{
			to_add = c - '0';
			if (negative % 2 == 1)
				to_add *= -1;
			result = result * 10 + to_add;
			parsing_started = 1;
		}
		else if (parsing_started > 0)
			break;
		else if (c == '-')
			negative++;

		index++;
	}

	return (result);
}
