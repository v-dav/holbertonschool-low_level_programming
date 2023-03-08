#include "main.h"

/**
 * _memset - that fills memory with a constant byte
 * @s: a pointer to a string
 * @b: constantt byte
 * @n: first n bytes to fill
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
