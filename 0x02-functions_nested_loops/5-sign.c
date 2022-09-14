#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n the number
 *
 * Returns 1 and prints + if n greater than zero, returns 0 and 
 * prints 0 if n is zero, returns -1 and prints - if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(-1);
		return (-1);
	}
}
