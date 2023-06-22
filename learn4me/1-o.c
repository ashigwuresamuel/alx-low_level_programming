#include <stdio.h>

/**
 * main - prints base 10  numbers from 0-9.
 *
 * Return:o Success.
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
