#include <stdlib.h>
#include <time.h>
#include <stdio,h>
/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5,less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int lastdigt;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastdigt = n * 10;

	if (lastdigt > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigt);
	}

	else if (lastdigt == 0)

	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigt);
	}

	else

	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigt);
	}

	return (0);
}
