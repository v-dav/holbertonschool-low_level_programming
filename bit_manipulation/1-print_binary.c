#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to convert to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j;
	int flag = 0;

	if (n == 0)
		_putchar ('0');

	for (i = sizeof(n) * 4; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag)
				_putchar('0');
		}
	}
}
