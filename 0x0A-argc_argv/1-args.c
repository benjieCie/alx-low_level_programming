#include "main.h"
#include <stdio.h>

/**
 * main - Prints program name followed by a new line
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 always Success
 */
int main(int argc, char *argv[])
{
	int i;

	argc = argc;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
