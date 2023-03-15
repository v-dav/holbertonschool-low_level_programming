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
	char *s_concat = NULL;
	unsigned int i;

	if (s1 != NULL)
	{
		while (s1[s1_size])
			s1_size++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[s2_size])
			s2_size++;
	}
	else
		s2 = "";
	if (n >= s2_size)
		n = s2_size;
	s_concat = malloc(s1_size + n + 1);
	if (s_concat == 0)
		return (0);
	for (i = 0; i < s1_size; i++)
		s_concat[i] = s1[i];

	for (i = 0; i < n; i++)
		s_concat[s1_size + i] = s2[i];

	s_concat[s1_size + i] = '\0';
	return (s_concat);
}

