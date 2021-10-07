#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: end program
 */
int main(void)
{
	int i = 1;
	long int num1 = 0;
	long int num2 = 1;
	long int sumPrevTwo = 0;

	while (i <= 98)
	{
		if (i < 100)
			printf("%ld%s", num1 + num2, ", ");
		else
			printf("%ld", num1 + num2);
		sumPrevTwo = num1 + num2;
		num1 = num2;
		num2 = sumPrevTwo;
		i++;
	}
	printf("\n");
	return (0);
}
