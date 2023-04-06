#include <string.h>

/**
 * _pow_recursion- a function that returns the value of x raised to
 * the power of y
 * @x: a number to raise to the power
 * @y: a number used to raise the number x to the number to
 *
 * Return: int, the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_nb = 0;
	int size = strlen(b);
	int i = 0;

	if (b == NULL)
		return (int_nb);

	for (; i < size; i++)
	{
		if (b[i] == '0' || b[i] == (1 + '0'))
			int_nb += (b[i] - '0') * _pow_recursion(2, size - i - 1);
		else
			return (0);
	}
	return (int_nb);
}
