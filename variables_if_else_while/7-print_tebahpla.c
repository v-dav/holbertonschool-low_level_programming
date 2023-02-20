#include <stdio.h>

/**
 * main - Entry point and loops through letters to make an alphabet suite
 *
 * Description: prints the alphabet in lowercase followed by a new line,
 * in reverse order
 * Example: zyxwvutsrqponmlkjihgfedcba
 * Return: 0 succes program exit
 */
int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
