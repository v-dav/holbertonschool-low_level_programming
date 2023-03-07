#include "main.h"

int help_recursion(int n, int try);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (help_recursion(n, 0));
}

/**
 * help_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @try: iterator
 *
 * Return: the resulting square root
 */
int help_recursion(int n, int try)
{
	if (try * try > n)
		return (-1);
	if (try * try == n)
		return (try);
	return (help_recursion(n, try + 1));
}
