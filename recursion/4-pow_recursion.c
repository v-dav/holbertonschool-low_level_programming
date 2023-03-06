#include "main.h"

/**
 * _pow_recursion- a function that returns the value of x raised to
 * the power of y
 * @x: a number to raise to the power
 * @y: a number used to raise the number x to the number to
 *
 * Return: int, the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
