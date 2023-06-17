#include <stdio.h>
/**
 * main - Prints lowercase alphabet i reverse
 * Return: 0 Always.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}

