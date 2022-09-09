#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
