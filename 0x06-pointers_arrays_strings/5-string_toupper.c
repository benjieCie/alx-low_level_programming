#include "main.h"

/*
 * string_toupper - changes lower case letters to upper
 *
 * @c: string to convert to upper
 *
 * Return: Upper case string
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);

}
