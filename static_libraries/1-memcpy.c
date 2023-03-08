#include "main.h"

/**
 * _memcpy - a function that copies n bytes from memory area src to memory
 * area dest
 * @dest: a pointer to a destination string
 * @src: a pointer to source string
 * @n: number of  bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
