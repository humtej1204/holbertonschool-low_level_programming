#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * @argc: arg counter
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	(void)argc;
	(void)argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
