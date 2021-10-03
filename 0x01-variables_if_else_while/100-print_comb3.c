#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int n;
	int m;

	while (n != m)
	{
		printf("%d%d, ", n, m);
		++n;
		++m;
	}

	return (0);
}
