#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet abcdefghijklmnopqrstuvwxyz x 10
 *
 * Return: 0 succes exit
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
