#include "main.h"

/**
 * _strcpy - that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination array (buffer)
 * @src: source array
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int i;

	while (src[t] != '\0')
		t++;
	for (i = 0; i <= t; i++)
		dest[i] = src[i];
	return (dest);
}
