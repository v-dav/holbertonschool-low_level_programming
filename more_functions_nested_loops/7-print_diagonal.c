#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, e;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (e = 1; e <= i; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
