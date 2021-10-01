#include<stdio.h>
/**
* main - Entry point
*
*
* Return: 0 number
*/
int main(void)
{
	printf("Size of char: %lu  byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
