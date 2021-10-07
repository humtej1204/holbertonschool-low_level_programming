#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: end program
 */
int main(void)
{
	int i = 1;
	long int  num1 = 0;
	long int num2 = 1;
	long int sumPrevTwo = 0;
	long int sumEven = 0;
	long int maxFibTerm = 4000000;

	while (num1 < maxFibTerm && num2 < maxFibTerm)
	{
		sumPrevTwo = num1 + num2;
		sumEven += (((sumPrevTwo % 2) == 0) ? sumPrevTwo : 0);
		num1 = num2;
		num2 = sumPrevTwo;
		i++;
	}
	printf("%ld\n", sumEven);
	return (0);
}
