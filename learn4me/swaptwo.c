#include <stdio.h>

/**
* main - Swaps two numbers
* Return: 0 Always.
*/
int main(void)
{
int num1, num2, tmp;

printf("Enter two numbers\n");
scanf("%d", &num1);
scanf("%d", &num2);
printf("Before the swap num1: %d and num2: %d\n", num1, num2);
tmp = num1;
num1 = num2;
num2 = tmp;

printf("After the swap num1: %d and num2: %d\n", num1, num2);

}
