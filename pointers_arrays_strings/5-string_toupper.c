#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase.
 * @str: the string to convert
 *
 * Return: char pointer to reversed string
 */
char *string_toupper(char *str)
{
	int size = 0;
	int i = 0;

	while (str[size])
		size++;

	while (i < size)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
