#include <stdio.h>
/**
 * main - Entry point
 * Prints lower and upprercase alphabet excluding q and e
 * Return: 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		if (c != 'e' && c != 'q')

		{
			putchar(c);
		}

		c++;
	}
	putchar('\n');

	return (0);
}
