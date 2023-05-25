#include "search_algos.h"

/**
 * linear_search - function that performs a linear search on an array to find
 * a specific value
 *
 * @array: A pointer to the first element of the array to be searched
 * @size: represents the size of the array
 * @value:  is the integer value that we are searching for in the array
 *
 * Return: the index of the first occurrence of the `value` in the `array`
 * if it is found, or `-1` if the `array` is `NULL` or the `value` is not
 * found in the `array`
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
