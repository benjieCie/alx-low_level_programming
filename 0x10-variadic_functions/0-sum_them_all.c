#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: number
 *
 * Return: Sum of all parameters. if n is null return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
