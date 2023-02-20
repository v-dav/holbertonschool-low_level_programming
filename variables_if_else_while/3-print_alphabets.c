#include <stdio.h>

/**
 * main - Entry point and loops through letters to make an alphabet suite
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Example: abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
 * Return: 0 succes program exit
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
	{
		putchar(LETTER);
	}

	putchar('\n');

	return (0);
}
