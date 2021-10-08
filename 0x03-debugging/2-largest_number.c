#include "main.h"
/**
 * largest_number - function
 *
 * @a: parameter 1
 * @b: parameter 2
 * @c: parameter 3
 *
 * Return: return value
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);
}
