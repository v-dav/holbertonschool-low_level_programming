#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: char pointer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
