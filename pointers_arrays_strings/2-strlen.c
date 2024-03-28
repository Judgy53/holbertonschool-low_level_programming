/**
 * _strlen - calculates the length of the string
 * @s: string which length you want to know
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
