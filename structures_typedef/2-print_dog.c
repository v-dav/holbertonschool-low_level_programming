#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that initialize a variable of type struct dog
 * @d: a variable of type struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %p\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner != 0)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %p\n", d->owner);
	}
	else
	{};
}
