#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - get natural square;
 *
 * @n: integer number
 *
 * Return: square root if ahve square root. -1 other
 */
int _sqrt_recursion(int n)
{
	int factor = 0;

	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, factor));
}
/**
 * _sqrt - identify perfect square number
 *
 * @n: integer number
 * @r: possible root
 *
 * Return: square root if ahve square root. -1 other
 */
int _sqrt(int n, int r)
{
	if ((r * r) > n) /* impossible case */
		return (-1);
	if ((r * r) < n)
		return (_sqrt(n, r + 1));
	return (r);
}
