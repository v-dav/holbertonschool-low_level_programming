#include "main.h"

/**
 * print_rev -  prints a string, in reverse order,
 * followed by a new line.
 * @s: a string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
