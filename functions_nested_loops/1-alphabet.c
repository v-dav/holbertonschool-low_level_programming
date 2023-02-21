#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabet abcdefghijklmnopqrstuvwxyz
 *
 * Return: 0 succes exit
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
