#include <stdio.h>

/**
 * main - Entry point and loops through letters to make an alphabet suite
 *
 * Description: prints the alphabet in lowercase followed by a new line,
 * except letters "e" and "q".
 * Example: abcdfghijklmnoprstuvwxyz
 * Return: 0 succes program exit
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
