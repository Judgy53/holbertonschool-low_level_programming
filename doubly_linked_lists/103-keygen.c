#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int, char **);
int generate_char1_index(int);
int generate_char2_index(char *, int);
int generate_char3_index(char *, int);
int generate_char4_index(char *, int);
char generate_char5_index(char *, int);
int generate_char6_index(char);

/**
 * main - generate and print to stdout a valid password for crackme5
 * @argc: number of arguments
 * @argv: list of arguments (strings)
 *
 * Return: 1 if argc != 2 or strlen(name) != 6, 0 otherwise
 */
int main(int argc, char **argv)
{
	int magic_index;
	int name_length;
	char *name;
	char magic_string[64] = "A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt";

	strcat(magic_string, "OGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk");

	if (argc != 2)
	{
		printf("Usage: %s name\n", argv[0]);
		return (1);
	}

	name = argv[1];
	name_length = strlen(name);

	magic_index = generate_char1_index(name_length & 0xffffffff);
	putchar(magic_string[magic_index]);

	magic_index = generate_char2_index(name, name_length);
	putchar(magic_string[magic_index]);

	magic_index = generate_char3_index(name, name_length);
	putchar(magic_string[magic_index]);

	magic_index = generate_char4_index(name, name_length);
	putchar(magic_string[magic_index]);

	magic_index = generate_char5_index(name, name_length);
	putchar(magic_string[magic_index]);

	magic_index = generate_char6_index(*name);
	putchar(magic_string[magic_index]);

	return (0);
}

/**
 * generate_char1_index - generate char index based on name length
 * @length: length of name
 *
 * Return: char 1 magic index
 */
int generate_char1_index(int length)
{
	return ((length ^ 0x3b) & 0x3f);
}

/**
 * generate_char2_index - generate char index based on name value and length
 * @name: name string
 * @length: length of name
 *
 * Return: char 2 magic index
 */
int generate_char2_index(char *name, int length)
{
	uint out = 0;
	int index = 0;

	while (index < length)
	{
		out += (int)(name[index]);
		index++;
	}

	return ((out ^ 0x4f) & 0x3f);
}

/**
 * generate_char3_index - generate char index based on name value and length
 * @name: name string
 * @length: length of name
 *
 * Return: char 3 magic index
 */
int generate_char3_index(char *name, int length)
{
	uint out = 1;
	int index = 0;

	while (index < length)
	{
		out *= (int)(name[index]);
		index++;
	}

	return ((out ^ 0x55) & 0x3f);
}

/**
 * generate_char4_index - generate char index based on name value and length
 * @name: name string
 * @length: length of name
 *
 * Return: char 4 magic index
 */
int generate_char4_index(char *name, int length)
{
	uint out;
	int max = name[0];
	int index = 0;

	while (index < length)
	{
		if (name[index] > max)
			max = name[index];
		index++;
	}

	srand(max ^ 0xe);
	out = rand();
	return (out & 0x3f);
}

/**
 * generate_char5_index - generate char index based on name value and length
 * @name: name string
 * @length: length of name
 *
 * Return: char 5 magic index
 */
char generate_char5_index(char *name, int length)
{
	char out = 0;
	int index = 0;

	while (index < length)
	{
		out += name[index] * name[index];
		index++;
	}

	return ((out ^ 0xef) & 0x3f);
}

/**
 * generate_char6_index - generate char index based on first char of name
 * @n: first char of name
 *
 * Return: char 6 magic index
 */
int generate_char6_index(char n)
{
	int out = 0;
	int index = 0;

	while (index < n)
	{
		out = rand();
		index++;
	}

	return ((out ^ 0xe5) & 0x3f);
}
