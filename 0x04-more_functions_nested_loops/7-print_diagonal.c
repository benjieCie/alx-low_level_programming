#include "main.h"

/**
 * print_diagonal - Prints a diagonal line specified number of times
 *
 * @n: number of time to print
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int counter;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 1; counter <= n; counter++)
		{
			for (space = 1; space < counter; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
