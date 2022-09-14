#include "main.h"

/**
 *print_alphabet 10 times - prints the alphabet 10 times in lower case
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int k=0;

	while (k <= 10)
	{
		for (i =97; i < 123; i++)
		{
			_putchar(i);
		}

		k++;
		_putchar('\n');
	}
}
