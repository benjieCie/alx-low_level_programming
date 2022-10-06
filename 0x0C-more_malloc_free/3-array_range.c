#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: inout
 * @max: input
 *
 * Return: Pointer to new array of int in mem
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int j;

	if (min > max)
		return (NULL);
	for (j = 0; j < (max - min); j++)
	{
	}
	array = malloc(sizeof(int) * (j + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		array[i] = min++;
	}
	return (array);
}
