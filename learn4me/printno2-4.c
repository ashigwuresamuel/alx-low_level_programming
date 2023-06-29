#include <stdio.h>
/**
 * main - prints 0-9 without 2 and 4.
 * Return: 0 Always.
 */
int main(void)
{
	char  k;

	k = '0';

	while (k < '10')
	{
		if (k != '2' && k != '4')
		{
			putchar(k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}
