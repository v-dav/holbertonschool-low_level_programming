#include "main.h"

/**
 * _strstr - a function that  locates a substring
 * @haystack: a string to search in
 * @needle: string to search
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[i] == needle[j]; j++, i++)
			{
				if (haystack[i] == needle[j] && needle[j + 1] == '\0')
					return (haystack + (i - j));
			}
		}
	}
	return (0);
}
