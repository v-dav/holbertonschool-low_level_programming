#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: the structure of type struct dog to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
