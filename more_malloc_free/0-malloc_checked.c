#include <stdlib.h>

/**
 * malloc_checked - a function that that allocates memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
