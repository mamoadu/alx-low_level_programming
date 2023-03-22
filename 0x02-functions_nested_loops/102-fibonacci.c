#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fib02;
		fib02 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
