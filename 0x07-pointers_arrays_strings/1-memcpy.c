#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: destination to copy to
 * @src: Source to copy from
 * @n: bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
