#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: a pointer to a string with a name
 * @age: dog's age
 * @owner: a pointer to a string with dog's owner name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
