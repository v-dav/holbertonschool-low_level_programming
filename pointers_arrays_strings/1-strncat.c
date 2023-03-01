#include "main.h"

/**
 * _strncat- a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: most n bytes from src
 *
 * Return: char pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
