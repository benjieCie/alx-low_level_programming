#include "main.h"

/**
 *  _islower - checks if a character is lower case
 *
 *  @c: the character in ASCII value
 *
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
