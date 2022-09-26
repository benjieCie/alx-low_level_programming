#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: String to search
 * @c: character to search
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * null if character not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
