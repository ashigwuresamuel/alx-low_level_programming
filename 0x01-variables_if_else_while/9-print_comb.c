#include <stdio.h>
/**
 * main - get all possible combinations of single-digit numbers
 *
 * Return: o Alwways
 */
int main(void)
{
	int n;

	for (n = 48; n < 58, n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');

			putchar('');
		}
	}
	putchar('\n');

	return (0);

}
