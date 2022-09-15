#include "main.h"

/**
 * print_triangle - prints a triangle with specified size
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
