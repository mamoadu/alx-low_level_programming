#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input value
 * @size: input value
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, c;

	num1 = 0;
	num2 = 0;

	for (c = 0; c < size; c++)
	{
		num1 = num1 + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		num2 += a[c * size + (size - c - 1)];
	}
	printf("%d, %\n", num1, num2);
}
