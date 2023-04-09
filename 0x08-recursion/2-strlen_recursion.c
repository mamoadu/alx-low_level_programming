#include "main.h"
/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
