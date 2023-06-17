#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Prints letters of the alphabet in lowercases
 * Return: 0 Always.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
