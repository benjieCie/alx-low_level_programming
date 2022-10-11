#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dogs owner
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName = 0;
	int lenOwner = 0;
	int i;
	dog_t *dt;

	dt = (dog_t *)malloc(sizeof(dog_t));
	if (dt == NULL)
		return (NULL);
	while (name[lenName++])
		;
	while (owner[lenOwner++])
		;
	dt->name = malloc(lenName * sizeof(dt->name));
	if (dt->name == NULL)
	{
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= lenName; i++)
		dt->name[i] = name[i];
	dt->age = age;
	dt->owner = malloc(lenOwner * sizeof(dt->owner));
	if (dt->owner == NULL)
	{
		free(dt->name);
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= lenOwner; i++)
		dt->ownler[i] = owner[i];
	return (dt);
}
