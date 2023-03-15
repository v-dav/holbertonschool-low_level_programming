#include <stdlib.h>

/**
 * string_nconcat - a function that a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to the new allocated space with concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0;
	unsigned int s2_size = 0;
	char *s_concat;
	unsigned i;

	if (s1 != NULL)
	{
		while (s1[s1_size])
			s1_size++;
	}
	if (s2 != NULL)
	{
		while (s2[s2_size])
			s2_size++;
	}
	if (n > 0 && n < s2_size && s2 != NULL)
		s_concat = malloc(s1_size + n + 1);
	else if (n > 0 && n >= s2_size && s2 != NULL)
		s_concat = malloc(s1_size + s2_size + 1);
	else if ((n == 0 || s2 == NULL) && s1 != NULL)
		s_concat = malloc(s1_size + 1);
	if (s_concat == 0)
		return (0);
	if (s1 != NULL)
	{
		for (i = 0; i < s1_size; i++)
			s_concat[i] = s1[i];
	}
	if (s2 != NULL && n > 0)
	{
		for (i = 0; i < n && s2[i] != 0; i++)
			s_concat[s1_size + i] = s2[i];
	}
	return (s_concat);
}

