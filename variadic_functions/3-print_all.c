#include "variadic_functions.h"

/**
 * print_char - a function that prints an char
 * @ap: argument parameter
 *
 * Return: nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - a function that prints an integer
 * @ap: argument parameter
 *
 * Return: nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - a function that prints an float
 * @ap: argument parameter
 *
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - a function that prints a string
 * @ap: argument parameter
 *
 * Return: nothing
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - a function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

	int i = 0;
	int j = 0;
	va_list ap;
	char *s;

	pf Print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};
	s = "";

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *Print[j].op)
			{
				printf("%s", s);
				Print[j].print(ap);
				s = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(ap);
}
