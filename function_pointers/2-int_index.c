#include <stddef.h>

/**
 * int_index - a function that searches for an integer
 * @array: an array to search in
 * @size: the size of the given array
 * @cmp: a pointer to a function that will execute the comparison action
 *
 * Return: the array index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int result;
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = (*cmp)(array[i]);
		if (result == 1)
			return (i);
	}

	if (i == size && result == 0)
		return (-1);

	return (0);
}
