#include <stdio.h>
/**
 * main - Prints possible dfferent combinations of three digits
 *
 * Return: 0 Always
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; < 58; m++)
		{
			for (i = 50; i < 58; i++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar('');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
