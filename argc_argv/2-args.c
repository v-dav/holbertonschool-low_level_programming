#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
