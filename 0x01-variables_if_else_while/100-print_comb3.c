#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int n = 0;
	int m = 0;

	while (n != m)
	{
		printf("%d%d, ", n, m);
		++n;
		++m;
	}

	return (0);
}
