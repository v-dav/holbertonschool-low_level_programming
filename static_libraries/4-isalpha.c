#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: - a character (number or letter)
 *
 * Return: Returns 1 if c is a letter (lowercase or uppercase)
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
