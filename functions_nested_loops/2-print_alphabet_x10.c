#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet abcdefghijklmnopqrstuvwxyz x 10
 *
 * Return: 0 succes exit
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
