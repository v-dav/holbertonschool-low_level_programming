#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: - a character
 *
 * Return: Returns 1 if c is lowercase. Returns 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
