#include "main.h"

/**
 * is_palindrome - runs check_palindrome
 *
 * @s: string input
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = str_length(s);

	if (len == 0)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * str_length - check the length of string
 *
 * @s: string input
 *
 * Return: int size of string
 */
int str_length(char *s)
{
	if (*s != '\0')
		return (1 + str_length(s + 1));
	return (0);
}

/**
 * check_palindrome - checks if string is palindrome
 *
 * @str: String to check
 * @i: start of string
 * @j: end of string
 *
 * Return: string if palindrome
 */
int check_palindrome(char str[], int i, int j)
{
	if (i >= j)
		return (1);
	if (str[i] != str[j])
		return (0);
	if (i <= j || i < j + 1)
		return (check_palindrome(str, i + 1, j - 1));
	return (1);

}
