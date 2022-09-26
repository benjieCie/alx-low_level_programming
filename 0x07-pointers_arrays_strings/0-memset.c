#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointed destination
 * @b: the desired value
 * @n: number of bytes
 *
 * Return: arry of b chars and n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
