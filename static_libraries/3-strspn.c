#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer to a string to check
 * @accept: characters autorized
 *
 * Return: the length of the initial substring of the string pointed to
 * by str1 that is made up of only those character contained in
 * the string pointed to by str2
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (res);
}
