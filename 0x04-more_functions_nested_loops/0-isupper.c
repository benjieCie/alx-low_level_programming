#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper case characters
 *
 * @c: variable text
 *
 * Return: 1 if upper case 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
