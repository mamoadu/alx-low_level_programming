#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0)
 */
int main(void)
{
	int n;
	char alp;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
