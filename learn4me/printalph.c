#include <stdio.h>
/**
 * main - prints sizesof types
 *
 * Return:0 Always
 */
int main(void)
{
	char char_type;
	int int_type;
	long int longint_type;
	long long int long2_type;
	float float_type;

	printf("The size of char is :%zu byte(s)\n", sizeof(char_type));
	printf("The Size of int is :%zu byte(s)\n", sizeof(int_type));
	printf("The size of long int is :%zu byte(s)\n", sizeof(longint_type));
	printf("The Size of long long int is :%zu byte(s)\n", sizeof(long2_type));
	printf("The Size of float is :%zu byte(s)\n", sizeof(float_type));

	return (0);
}
