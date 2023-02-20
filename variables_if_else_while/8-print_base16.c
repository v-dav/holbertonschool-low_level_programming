#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Example: 0123456789abcdef
 * Return: 0 success, exit
 */
int main(void)
{
	int i = 48;
	int c = 97;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
