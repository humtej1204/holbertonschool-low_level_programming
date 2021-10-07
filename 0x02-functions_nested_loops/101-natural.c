#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int n, s = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			s = s + n;
		}
		else
		{

		}
	}
	printf("%d\n", s);

	return (0);
}
