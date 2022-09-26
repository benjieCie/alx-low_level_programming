#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: array
 * @size: Size
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int tot1 = 0;
	int tot2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		tot1 = tot1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		tot2 = tot2 + a[j];
	printf("%d, %d\n", tot1, tot2);
}
