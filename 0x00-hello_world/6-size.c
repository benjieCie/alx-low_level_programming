#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	fprintf(stdout, "Size of a char: %lu byte(s)\n", sizeof(a));
	fprintf(stdout, "Size of an int: %lu byte(s)\n", sizeof(b));
	fprintf(stdout, "Size of a long int: %lu byte(s)\n", sizeof(c));
	fprintf(stdout, "Size of a long long int: %lu bytes(s)\n", sizeof(d));
	fprintf(stdout, "Size of a float: %lu byte(s)", sizeof(e));
	return (0);
}
