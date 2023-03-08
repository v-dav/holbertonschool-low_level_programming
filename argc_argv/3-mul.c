#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 if program receives 2 arguments, 1 if not
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = (atoi(argv[1]) * (atoi(argv[2])));
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
