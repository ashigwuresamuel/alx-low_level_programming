#include <stdio>
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
			puchar(',');

			putchar('');
		}
	}
	putchar('\n');

	return (0);

}
