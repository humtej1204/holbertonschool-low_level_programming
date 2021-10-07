#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: end program
 */
int main(void)
{
	unsigned long int n, a = 1, b = 1, s, s1, s2;

	printf("%lu", a);

	for (n = 1; n <= 90; n++)
	{
		s = a + b;
		printf(", %lu", s);
		a = b;
		b = s;
	}

	s1 = s / 1000000000;
	s2 = s % 1000000000;

	for (n = 91; n <= 98; ++n)
	{
		s = a + b;
		printf(", %lu%lu", s1, s2);
		a = b;
		b = s;
	}

	putchar(10);

	return (0);
}
