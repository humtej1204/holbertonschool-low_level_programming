#include "main.h"
/**
 * _abs - function to get the absolute value
 *
 * @n: parameter of the funtion
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}

