#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the char to initialize with
 *
 * Return: pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (0);
	}

	a = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	if (a == NULL)
	{
		return (0);
	}

	return (a);
}
