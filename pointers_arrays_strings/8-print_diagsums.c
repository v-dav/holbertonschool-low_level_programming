#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: a square array of integers
 * @size: size of the table
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum_p = 0;
	int sum_s = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_p += a[(size * i) + i];
			}
			if ((i + j) == (size - 1))
			{
				sum_s += a[(size * (i + 1)) - (i + 1)];
			}
		}
	}
	printf("%d, %d\n", sum_p, sum_s);
}
