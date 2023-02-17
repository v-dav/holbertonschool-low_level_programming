#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * it is compiled and run on
 *
 * Description: prints the size of char, int, long int,
 * long long int and float variable types
 * Return: 0 if function works, 1 if not
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
