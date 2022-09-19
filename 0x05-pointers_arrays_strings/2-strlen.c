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
	int i = 1;
	int counter = 0;
	char c = s[0];

	while (c != '\0')
	{
		counter++;
		c = s[i++];
	}
	return (i);
}
