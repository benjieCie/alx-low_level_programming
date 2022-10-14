#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main entry of program
 *
 * @argc: arguments
 * @argv: arguments
 *
 * Return: Return erro if not 4 args exit 08
 * return error if op is null and exit 99
 * return erro if div or mod 0
 */
int main(int argc, char *argv[])
{
	int x, y, ans;
	int (*result)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(get_op);
	ans = result(x, y);

	printf("%d\n", ans);
	return (0);
}
