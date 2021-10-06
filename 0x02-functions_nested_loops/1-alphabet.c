#include "main.h"
/**
 * main - main function
 *
 * Return: End program
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}

	_putchar(10);
	return (0);
}
