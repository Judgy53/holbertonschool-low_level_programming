#include <stdio.h>

char isPalindrome(int);

/**
 * main - finds the largest 3 digits palindrome
 *
 * Return: always 0
 */
int main(void)
{
	int a = 999;
	int b = 999;
	int pal = 0;

	int l_a = 0;
	int l_b = 0;
	int l_pal = 0;

	FILE *f;

	while (a >= 100)
	{
		b = 999;
		while (b >= 100)
		{
			pal = a * b;

			if (pal <= l_pal)
				break;

			if (isPalindrome(pal) > 0)
			{
				l_pal = pal;
				l_a = a;
				l_b = b;
			}
			b--;
		}
		a--;
	}

	printf("Largest Palindrome: %d * %d = %d\n", l_a, l_b, l_pal);

	f = fopen("102-result", "w");
	if (f != NULL)
	{
		fprintf(f, "%d", l_pal);
		fclose(f);
		f = NULL;
	}

	return (0);
}

/**
 * isPalindrome - check if a number is a palindrome
 * @number: number to check
 *
 * Return: 1 if number is palindrome, 0 otherwise
 */
char isPalindrome(int number)
{
	int reversed = 0;
	int n = number;

	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	return (number == reversed);
}
