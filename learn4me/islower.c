#include "main.h"
#include <stdio.h>
/**
* _islower - checks for lowercase letters
* Return: Returns 1 if c is lowercase Returns 0 otherwise
* @c: character to be checked.
*/
int _islower(int c)
{

if (c >= 'a' && c <= 'z')

	return (1);

else

	return (0);

}
