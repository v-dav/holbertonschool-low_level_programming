#include "3-calc.h"

/**
 * main - the calculator program that performs simple operations.
 * @argc: number of arguments on command line
 * @argv: array of pointers to the strings
 * which are two numbers and the operator
 *
 * Return: 0 if program receives 3 arguments, exit (98) if
 * different number of arguments
 */
int main(int argc, char *argv[])
{
	/* variables declaration */
	int result;
	int a;
	int b;
	char *op;
	int (*op_func)(int, int) = NULL;

	/* condition */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*variables initialization */
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	op_func = (*get_op_func)(op);

	/*conditions*/
	if (op_func == 0 || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/*result */
	{
		result = op_func(a, b);
		printf("%d\n", result);
	}
	return (0);
}

