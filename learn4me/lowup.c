#include <stdio.h>

/**
 * main - prints lowercase followed by uppercase letters.
 *
 * Return: o Success.
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		putchar(' ');
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		putchar(' ');
		ch++;
	}

	putchar('\n');

	return (0);
}
