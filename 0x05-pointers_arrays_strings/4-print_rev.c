#include "main.h"

/**
 * print_rev - function to print string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int forward = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		forward++;
	}
	for (j = (forward - 1); n >= 0; n--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
