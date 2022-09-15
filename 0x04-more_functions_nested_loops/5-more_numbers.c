#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers 0 - 14 10 times
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i;
	int row;

	for (row = 0; row < 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
