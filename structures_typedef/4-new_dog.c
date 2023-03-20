#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog structure address
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size = 0;
	int owner_size = 0;
	int i;
	dog_t *dog = NULL;

	while (name[name_size] != '\0')
		name_size++;
	while (owner[owner_size] != '\0')
		owner_size++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_size + 1));
	dog->owner = malloc(sizeof(char) * (owner_size + 1));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_size; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= owner_size; i++)
		dog->owner[i] = owner[i];
	dog->age = age;

	return (dog);
}
