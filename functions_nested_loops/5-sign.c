#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @c: - a number
 *
 * Return: Returns 1 and print + if n > 0
 * Returns 0 and print 0 if n = 0
 * Returns -1 and prints - if n < 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
