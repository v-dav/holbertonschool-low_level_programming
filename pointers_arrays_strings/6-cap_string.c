#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string to capitalize
 *
 * Return: char pointer to capitalized string
 */
char *cap_string(char *str)
{
	int size_str = 0;
	int i = 0;
	int j = 0;
	char sep[14] = {
		32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', 1
	};

	while (str[size_str])
		size_str++;

	while (i < size_str)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			while (j < 13)
			{
				if (i > 0 && str[i - 1] == sep[j])
					str[i] = (str[i] - 32);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (str);
}
