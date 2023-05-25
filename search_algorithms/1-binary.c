#include "search_algos.h"

/**
 * binary_search - function that performs a binary search on a given array
 * to find a specific value
 * 
 * @array: A pointer to the first element of the array to be searched.
 * @size: The size parameter is the number of elements in the array.
 * @value: The value we are searching for in the array.
 * 
 * Return: the index of the element in the array that matches the given value,
 * or -1 if the value is not found in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid, i;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i > start)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;

		else
			end = mid - 1;
	}
	return (-1);
}
