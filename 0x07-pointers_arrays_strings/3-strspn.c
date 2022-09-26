#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: prefix
 *
 * Return: number of bytes in s only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (accept[j] != '\0' && accept[j] != s[i])
		{
			if (s[i] == accept[j])
				len++;
			j++;
			if (accept[j] == '\0')
				return (len);
		}
	}
	return (len);
}
