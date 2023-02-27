#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int temp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i / 2 - 1; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
