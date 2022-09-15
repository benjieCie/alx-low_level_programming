#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints thr numbers from 1 - 100
 * replaces multpiles of 3 with Fizz
 * replaces multiples of 5 with Buzz
 * replaces Multiples of 3 and 5 with FizzBuzz
 *
 * Return: 0 Always success
 */
int main(void)
{
	int count;

	for (count = 1; count < 101; count++)
	{
		if ((count % 3 == 0) && !(count % 5 == 0))
			printf("Fizz ");
		else if ((count % 5 == 0) && !(count % 3 == 0))
			printf("Buzz ");
		else if ((count % 3 == 0) && (count % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", count);
	}
	return (0);
}
