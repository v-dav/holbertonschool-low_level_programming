#include <stdio.h>

/**
 * main - Entry point and loops through letters to make an alphabet suite
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Example: abcdefghijklmnopqrstuvwxyz
 * Return: 0 succes program exit
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
