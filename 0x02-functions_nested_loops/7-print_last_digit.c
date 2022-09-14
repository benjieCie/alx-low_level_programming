#include "main.h"

/**
 * print_last_digit - Prints the last digit from input
 *
 * @n: digits as entered in integer.
 *
 * Return: Last digit value.
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;
	if (lastdigit < 0)
	{
		_putchar(-lastdigit + 48);
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + 48);
		return (lastdigit);
	}
}
