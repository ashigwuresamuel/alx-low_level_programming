#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * prints alphabet in lowercase and upperncase.
 * Return: 0 Always
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
