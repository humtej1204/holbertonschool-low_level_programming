#include <stdio.h>
/**
 * main - Entry Point
 *
 * @argc: number of arguments
 * @argv: vector of strings of arguments
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
