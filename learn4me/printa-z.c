#include <stdio.h>

/**
 * main - prints letters a - z in small lettrs
 *
 * Return:0 Always
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
