#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new struct type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *new;
	new = malloc(sizeof(struct dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
