#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array
 * @a: array name
 * @n: number of element
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i <= last; i++)
	{
		printf("%d", a[i]);
		if (i < last)
		{
			printf(", ");
		}

	}
	printf("\n");
}
