#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
