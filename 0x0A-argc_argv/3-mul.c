#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints results of multiplication of two numbers
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if success -1 if two arguments are not passed
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
