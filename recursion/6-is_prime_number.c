#include "main.h"

/**
 * is_prime_number - a function that evaluates if n is a prime number
 * @n: a number to evaluate
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);

	if (n == 3 || n == 7 || n == 9)
		return (1);

	if ((n % 2) == 1 && n != 5 && n != 1 && n != 25)
		return (is_prime_number(n % 10));

	if (n == 2 || n == 5)
		return (1);

	return (0);
}
