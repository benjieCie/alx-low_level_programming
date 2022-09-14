#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 *
 * @c: the character in ASCII value
 *
 * Return: 1 if alpha 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
