#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - principal function
*
*Return: end the program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_dig;

	last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_dig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_dig);
	}

	return (0);
}
