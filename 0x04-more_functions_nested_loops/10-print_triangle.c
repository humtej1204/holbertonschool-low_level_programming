#include "main.h"
/**
 * print_triangle - function
 *
 * @size: parameter
 *
 * Return: return value
 */
void print_triangle(int size)
{
	int col = 0;
	int row = 0;
	int t;

	if (size > 0)
	{
		while (row < size)
		{
			t = size - row - 1;
			while (col < size)
			{
				if (col < t)
					_putchar(32);
				else
					_putchar(35);
				col++;
			}
			_putchar(10);
			col = 0;
			row++;
		}
	}
	else
		_putchar(10);
}
