#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees mem allocation of dogs
 *
 * @d: dog of type dog_t
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
