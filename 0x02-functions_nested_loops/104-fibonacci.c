#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: end program
 */
int main(void)
{
	unsigned long n, a = 1, b = 1, s;

	printf("%lu", a);
	for (n = 1; n <= 98; ++n)
	{
		s = a + b;
		printf(", %lu", s);
		a = b;
		b = s;
	}
	putchar(10);

	return (0);
}
