#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int h, l;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (l = size; l >= 1 ; l--)
			{
				if (l <= h)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
