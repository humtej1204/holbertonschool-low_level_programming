#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *x;

	separator = (separator != NULL) ? separator : "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		x = va_arg(list, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
	}
	putchar(10);
}
