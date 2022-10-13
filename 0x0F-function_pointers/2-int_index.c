#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: data
 * @size: size of array
 * @cmp: pointer to comapre function
 *
 * Return: index of first element whichthe cmp function does not return 0
 * -1 if no ellement matches -1 is size is less than zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
