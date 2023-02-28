#include "main.h"

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: a string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int t = 0;
	int i;

	while (str[t] != '\0')
		t++;
	if (t % 2 == 0)
	{
		for (i = t / 2; i < t; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (t / 2) + 1; i < t; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
