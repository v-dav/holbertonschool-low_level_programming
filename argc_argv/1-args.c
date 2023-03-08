#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
