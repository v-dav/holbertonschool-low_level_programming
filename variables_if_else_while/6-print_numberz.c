#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new lin, without using char type variable
 * Example: 0123456789
 * Return: 0 success, exit
 */
int main(void)
{
	int i = 48;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
