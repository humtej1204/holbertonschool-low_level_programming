#include "main.h"
/**
 * _isdigit - function
 *
 * @c: parameter
 *
 * Return: return Value
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
