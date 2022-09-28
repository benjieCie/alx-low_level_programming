#include "main.h"

/**
 * is_prime_number - runs check_prime
 *
 * @n: input number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (check_prime(n, n) > 0)
		return (1);
	return (0);
}

/**
 * check_prime - checks if a number is prime
 * 
 * @n: input number
 * @i: comparison
 *
 * Return: prime number
 */
int check_prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}
