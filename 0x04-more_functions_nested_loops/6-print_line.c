#include "main.h"

/**
 * print_line - Prints the character _ as many times
 *
 * @n: number of times to print _
 *
 * Return: Void
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
