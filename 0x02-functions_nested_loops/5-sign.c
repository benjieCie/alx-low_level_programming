#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number
 *
 * Return: 1 n greater than zero returns. -1 if n is negative.
 * 0 is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
