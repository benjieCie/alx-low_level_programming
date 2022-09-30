#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - runs change
 *
 * @argc: arguments
 *
 * @argv: array pointing to arguments
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - Function to determine change
 *
 * @cents: amount of coins from main function
 *
 * Return: change
 */
int change(int cents)
{
	int q = 25;
	int d = 10;
	int n = 5;
	int t = 2;
	int p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}
