#include "main.h"

/**
 *  _is lower - checks if a character is lower case
 *
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
