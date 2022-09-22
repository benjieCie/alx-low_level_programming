#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @n: string to be capitalized
 *
 * Return: Capitalized string
 */
char *cap_string(char *n)
{
	int i;
	int j;
	int upper = 32;
	int separators[] = {',', ';', '.', '!', '?', '"', '(', ')', ' ',
		'\n', '\t', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - upper;
		upper = 0;

		for (j = 0; j <= 13; j++)
		{
			if (n[i] == separators[j])
			{
				j = 13;
				upper = 32;
			}
		}
	}
	return (n);
}
