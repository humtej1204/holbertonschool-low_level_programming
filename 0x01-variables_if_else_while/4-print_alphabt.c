#include <stdio.h>
/**
 * main - main function
 *
 * Return: end the program
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	printf("\n");

	return (0);
}
