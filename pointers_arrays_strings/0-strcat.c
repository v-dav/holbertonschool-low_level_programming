#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_t = 0;
	int j = 0;

	while (dest[dest_t])
		dest_t++;

	while (src[j])
	{
		dest[dest_t] = src[j];
		dest_t++;
		j++;
	}
	return (dest);
}
