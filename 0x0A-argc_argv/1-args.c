#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: arg count
 * @argv: vector of strings with arguments
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
