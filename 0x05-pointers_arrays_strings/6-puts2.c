#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first followed by new line
 *
 * @str: String to print
 *
 * Return: void;
 */
void puts2(char *str)
{
	int i;
	int len = 0;
	char *y = str;

	while (*y != '\0')
	{
		len++;
	}
	for (i = 0; i <= (len - 1); i++)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
