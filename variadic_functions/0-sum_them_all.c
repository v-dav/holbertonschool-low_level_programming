#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that sums all its parameters
 * @n: number of parameters to sum
 * @...: ellipsis
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
