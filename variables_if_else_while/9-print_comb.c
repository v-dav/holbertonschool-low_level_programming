#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations
 * of single-digit numbers separated by comma and space,
 * except after the digit 9 followed by a new line.
 * Example: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: 0 success, exit
 */
int main(void)
{
	int i = 48;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i < 57)
		{
		putchar(44);
		putchar(32);
		}
		else
		{
		putchar(10);
		}
	}

	return (0);
}
