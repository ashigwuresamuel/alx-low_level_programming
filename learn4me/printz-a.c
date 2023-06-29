#include <stdio.h>

/**
 * main - prints letters from z-a.
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
