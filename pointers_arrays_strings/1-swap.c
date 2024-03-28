/**
 * swap_int - swap the values of two integers
 * @a: first integer, will receive the value of b
 * @b: second integer, will receive the value of a
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
