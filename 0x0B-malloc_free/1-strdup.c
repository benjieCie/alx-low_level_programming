#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a newly allocated mem of str copy
 *
 * @str: string to duplicate
 *
 * Return: pointer to array, null is str is null
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *dup;

	if (dup == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;
	dup = malloc(sizeof(*str) * i);
	if (dup == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		dup[j] = str[j];
		j++
	}
	return (dup);
}
