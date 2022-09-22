#include "maiin.h"

/**
 *rot13 - A function that encodes a string using rot13
 *
 *@n: String to encode
 *
 *Return: char encoded value
 */
char *rot13(char *n)
{
	int i;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cypher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (n[i] == alpha[j])
			{
				n[i] = cypher[j];
				break;
			}
		}
	}
	return (n);
}
