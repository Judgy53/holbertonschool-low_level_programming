/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
