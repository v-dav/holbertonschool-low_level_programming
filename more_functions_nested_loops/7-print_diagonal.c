#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= (i - 1); j++)
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
