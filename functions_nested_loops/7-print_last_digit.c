#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: - a number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n >= 0)
	{
		_putchar(last + 48);
		return (last);
	}
	else
	{
		last = -last;
		_putchar(last + 48);
		return (last);
	}

}
