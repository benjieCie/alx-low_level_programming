#include "main.h"

/**
 * char *_strncpy - a function that copies two string
 *
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
