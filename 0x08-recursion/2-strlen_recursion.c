#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 *
 * @s: string
 *
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		n = 0;
	}
	else
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n)
}
