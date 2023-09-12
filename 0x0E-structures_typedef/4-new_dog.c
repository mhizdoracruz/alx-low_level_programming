#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - The new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
