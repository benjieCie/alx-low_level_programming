#include "main.h"

/**
 * print_square - prints a square based on the number entered
 *
 * @size: the size of the square
 *
 * Return: Void
 */
void print_square(int size)
{
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}		
	}
}
