#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * from minimum value to the maximum value included
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j;

	if (min > max)
		return (0);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (0);

	for (i = min, j = 0; i <= max && j < (max - min + 1); i++, j++)
		p[j] = i;

	return (p);
}
