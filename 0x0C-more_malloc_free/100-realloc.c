#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to prev mem alloc
 * @old_size: input
 * @new_size: input
 *
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *source;
	char *dest;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);
	source = ptr;
	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = source[i];
	free(ptr);
	return (dest);
}
