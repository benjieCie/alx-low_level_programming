#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry block
 *
 * Return: 0 Always success
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
