#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: the number to search in
 * @index: the index with a wanted bit value
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int j;

	if (n == 0)
		return (0);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	j = n >> index;
	if (j & 1)
		bit_value = 1;
	else
		bit_value = 0;

	return (bit_value);

}
