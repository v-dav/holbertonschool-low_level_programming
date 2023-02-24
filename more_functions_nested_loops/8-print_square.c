#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int h, l;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
