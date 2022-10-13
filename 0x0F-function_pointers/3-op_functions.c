#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition function
 *
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtruct function
 *
 * @a: first int
 * @b: second int
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 *
 * @a: first int
 * @b: second int
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 *
 * @a: first int
 * @b: second int
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 *
 * @a: first int
 * @b: second int
 *
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
