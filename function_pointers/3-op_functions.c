#include "3-calc.h"

/**
 * op_add - a function that adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers
 * @a: the numerator integer
 * @b: the denominator integer
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that gives remainder
 * of the division of two integers
 * @a: the numerator integer
 * @b: the denominator integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

