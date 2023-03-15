#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * and initialises all values to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the new allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
