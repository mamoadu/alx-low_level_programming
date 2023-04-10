#include "main.h"
/**
 * is_palindrome - function that returns 1 if string a palindrome and 0 if not
 * @s: input string
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int len = 0;
	int sen = 0;

	while (s[len] != '\0')
		len++;

	sen = len - 1;

	while (s[0] == s[sen] && len > 0)
	{
		s++;
		sen--;
		len -= 2;
	}
	return (len <= 1);
}
