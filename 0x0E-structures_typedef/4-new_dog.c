#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog (Success) | NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	if (!name || !owner)
		return (0);
	tmp = malloc(sizeof(dog_t));
	if (!tmp)
		return (0);
	tmp->name = name, tmp->age = age, tmp->owner = owner;
	return (tmp);
}
