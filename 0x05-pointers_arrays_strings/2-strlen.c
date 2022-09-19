#include "main.h"

/**
 * _strlen - calculates length of a string
 *
 * @s: value to calculate
 *
 * Return: total length
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
