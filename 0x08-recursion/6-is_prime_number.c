#include "main.h"
/**
 * main_algorithm - algoritmo principal de numero primo
 * @x: numero
 * @y: valor a evaluar
 * Return: resultado 0 no primo 1 primo
 */
int main_algorithm(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (main_algorithm(x, y + 1));
}
/**
 * is_prime_number - verifica si es numero primo
 * @n: numero a verificar
 * Return: resultado 0 no primo 1 primo
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_algorithm(n, 2));
}
