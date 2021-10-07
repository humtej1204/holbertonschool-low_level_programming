#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: end program
 */
int main(void)
{
	long long int  n, a = 1, b = 1, s;

	printf("%lld", a);
	for (n = 1; n <= 98; ++n)
	{
		s = a + b;
		printf(", %lld", s);
		a = b;
		b = s;
	}
	putchar(10);

	return (0);
}
