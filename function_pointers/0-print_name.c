/**
 * print_name - a function that prints a name
 * @name: name of the person
 * @f: a pointer to a function that will actually print a name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
