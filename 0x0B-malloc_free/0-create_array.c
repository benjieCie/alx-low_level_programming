#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: char input
 *
 * Return: Pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	string = malloc(sizeof(char) * size);
	if (string == NULL)
		return (NULL);
	while (i < size)
	{
		string[i] = c;
		i++;
	}
	return (string);
}
