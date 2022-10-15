#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between lines
 * @n: number iof integers passed to function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
