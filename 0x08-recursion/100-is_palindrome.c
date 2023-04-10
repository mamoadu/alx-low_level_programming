#include "main.h"
/**
 * len_rec - returns the length of a string
 * @s: string
 * Return: length of string
 */
int len_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_rec(s + 1));
}

/**
 * che_rec - checks characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */
int che_rec(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (che_rec(s, i + 1, len - 1));
}

/**
 * is_palindrome - function that returns 1 if string a palindrome and 0 if not
 * @s: input string
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (che_rec(s, 0, len_rec(s)));
}
