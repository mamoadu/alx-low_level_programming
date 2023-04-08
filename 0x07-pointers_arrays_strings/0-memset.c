#include "main.h"
/**
 * _memset - fill block of memory with specific value
 * @s: address of memory
 * @b: value
 * @n: n bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
