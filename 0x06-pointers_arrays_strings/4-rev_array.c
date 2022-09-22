#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to array
 * @n: size of array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temporary;

	for (i = 0; i < n; i++)
	{
		n--;
		temporary = a[i];
		a[i] = a[n];
		a[n] = temporary;
	}

}
