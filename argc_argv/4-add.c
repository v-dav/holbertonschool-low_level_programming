#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 success, 1 if one of the number contains symbols that are
 * not digits
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
