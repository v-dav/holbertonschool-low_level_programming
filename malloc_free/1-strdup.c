#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy to
 *
 * Return: pointer to a newly allocated space with the copy
 */
char *_strdup(char *str)
{
	int i;
	char *s;
	int size = 0;

	if (str == 0)
		return (0);

	while (str[size] != '\0')
		size++;

	s = malloc(size + 1);
	if (s == 0)
		return (0);

	for (i = 0; i < (size + 1); i++)
		s[i] = str[i];

	return (s);
}
