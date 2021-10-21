#include "main.h"
/**
 * _sqrt - get natural square;
 *
 * @x: integer number
 * @y: integer number
 * Return: square root if ahve square root. -1 other
 */
int _sqrt(int x, int y)
{
	int val;

	val = x - y;
	if (val < 0)
		return (-(y / 2) - 1);
	if (val == 0)
		return (1);
	else
		return (1 + _sqrt(val, y + 2));
}
/**
 * _sqrt - identify perfect square number
 *
 * @n: integer number
 * @r: possible root
 *
 * Return: square root if ahve square root. -1 other
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
