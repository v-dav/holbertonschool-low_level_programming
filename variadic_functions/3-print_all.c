#include "variadic_functions.h"

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(nil)";
	
	printf("%s", s);
}

/*----------------------------------*/

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

	while (format[i] != '\0')
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
