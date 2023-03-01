#include "main.h"
#include <string.h>

/**
 * leet - a function that encodes a string into 1337
 * @str: a string to encode
 *
 * Return: the char pointer to the string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char *pos;
	int index;
	char rempl[] = "4307143071";
	char lettres[] = "AEOTLaeotl";

	while (str[i] != '\0')
	{
		while (j < 10)
		{
			if (str[i] == lettres[j])
			{
				pos = strchr(lettres, str[i]);
				index = pos - lettres;
				str[i] = rempl[index];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
