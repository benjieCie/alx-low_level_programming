#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - unction that prints a name
 *
 * @name: pointer to char array
 * @f: pointer to a function that returns nothing
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != Null)
		f(name);
}
