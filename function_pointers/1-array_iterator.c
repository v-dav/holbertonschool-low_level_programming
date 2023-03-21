#include <stddef.h>

/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array
 * @array: an array to iterate on
 * @size: the size of the given array
 * @action: a pointer to a function that will execute an action on the array
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
	{}
	else
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
