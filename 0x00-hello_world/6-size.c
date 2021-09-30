#include<stdio.h>
/**
* main - Entry point
*
*
* Return: 0 number
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %lu bytes\n", sizeof(intType));
	printf("Size of float: %lu bytes\n", sizeof(floatType));
	printf("Size of double: %lu bytes\n", sizeof(doubleType));
	printf("Size of char: %lu byte\n", sizeof(charType));

	return (0);
}
