#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints results of addition of numbers
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if success -1 if two arguments are not passed
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
