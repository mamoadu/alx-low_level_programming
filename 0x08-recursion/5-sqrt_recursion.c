#include "main.h"
/**
 * _sqrt - recurses to find the natural square root
 * @n: number
 * @i: iterator
 * Return: result
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
