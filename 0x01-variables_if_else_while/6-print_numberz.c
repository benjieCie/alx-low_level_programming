#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a +'0');
		a++;
	}
	putchar('\n');
	return (0);
}
