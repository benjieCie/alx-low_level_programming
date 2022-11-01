#include "holberton.h"
/**
 * get_bit - a function that prints the binary representation of a number.
 *
 * @n: input
 *
 * @index: index
 *
 * Return: 0
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	return (-1);
}
