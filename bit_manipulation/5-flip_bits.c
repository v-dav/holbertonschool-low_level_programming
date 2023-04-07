#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_res;

	xor_res = n ^ m;

	while (xor_res > 0)
	{
		count++;
		xor_res &= (xor_res - 1);
	}

	return (count);
}
