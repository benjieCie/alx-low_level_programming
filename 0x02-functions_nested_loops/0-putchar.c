#include "main.h"

/**
 *main - print _putchar
 *
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char j[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(j[i]);
	}
	_putchar('\n');

	return (0);
}
