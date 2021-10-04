#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int coma = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					if (a <= c && b < d)
					{
					if (coma == 0)
					{
						putchar(',');
						putchar(' ');
					}
						coma = 0;
						putchar(a + '0');
						putchar(b + '0');
						putchar(32);
						putchar(c + '0');
						putchar(d + '0');
					}
					++d;
				}
				++c;
				d = 0;
			}
			++b;
			c = 0;
		}
		++a;
		b = 0;
	}

	putchar(10);

	return (0);
}
