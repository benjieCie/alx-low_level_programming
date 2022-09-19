#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: String to be reversed
 *
 * Return void
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int forward = 0;
	int i;

	while (s[forward] != '\0')
		forward++;
	for (i = 0; i < forward; i++)
	{
		forward--;
		reverse = s[i];
		s[i] = s[forward];
		s[forward] = reverse;
	}
}
