#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 *@s: character strings
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
