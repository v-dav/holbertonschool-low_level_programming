#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int l, c, produit;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			produit = l * c;

			if (produit < 10)
			{
				_putchar(produit + '0');
			}
			else
			{
				_putchar((produit / 10) + '0');
				_putchar((produit % 10) + '0');
			}

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
