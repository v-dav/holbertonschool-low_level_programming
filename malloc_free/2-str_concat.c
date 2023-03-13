#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space with the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size = 0;
	int s2_size = 0;
	int i;
	int j;
	char *s_concat;

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
	s_concat = malloc(s1_size + s2_size + 1);
	if (s_concat == 0)
		return (0);
	if (s1 != NULL)
	{
		for (i = 0; i < s1_size; i++)
			s_concat[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < s2_size + 1; j++, s1_size++)
			s_concat[s1_size] = s2[j];
	}
	else
		s_concat[s1_size] = '\0';
	return (s_concat);
}
