#include "search_algos.h"

/**
 * print_array - function that prints the elements of an array
 * between two given indices
 *
 * @array: A pointer to the first element of the array to be printed
 * @start: The starting index of the array from where the printing should begin
 * @end: an integer that represents the index of the last element in the array
 * that needs to be printed.
 */
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search_recursive - function that performs a binary search recursively
 * on a given array to find a specific value.
 *
 * @array: a pointer to the array of integers being searched
 * @start: The index of the first element in the array to be searched.
 * @end: The index of the last element in the array being searched.
 * @value: The value we are searching for in the array.
 *
 * Return: the index of the element in the array that matches the given value
 * If the value is not found in the array, the function returns -1
 */
int binary_search_recursive(int *array, int start, int end, int value)
{
	int mid = (start + end) / 2;

	if (start > end)
		return (-1); /* base case: value not found */

	print_array(array, start, end);

	if (array[mid] == value)
		return (mid); /*value found */
	else if (array[mid] < value) /* search in the right half */
		return (binary_search_recursive(array, mid + 1, end, value));
	else /* search in the left half */
		return (binary_search_recursive(array, start, mid - 1, value));
}

/**
 * binary_search - a function performs a binary search on an array
 *
 * @array: A pointer to the first element of the array to be searched.
 * @size: represents the number of elements in the array.
 * @value: the integer value that we are searching for in the array.
 * The binary search algorithm will try to find the index of this value
 *
 * Return: the result of calling the function `binary_search_recursive`
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
