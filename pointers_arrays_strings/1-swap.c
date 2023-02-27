#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to 1st int
 * @b: a pointer to 2nd int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
