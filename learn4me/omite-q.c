#include <stdio.h>

/**
 * main - prints a-z, excludiing e and q
 * Return: o.
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		printf("%c", ch);
		}
		ch++;
	}

	printf("\n");

	return (0);
}
