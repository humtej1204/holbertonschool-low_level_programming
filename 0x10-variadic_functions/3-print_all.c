#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0;
	char *k;
	char *sep = ", ";

	va_start(list, format);

	while ((*format) != 0 && *(format + x) != '\0')
	{
		switch (*(format + x))
		{
			case 's':  /* string */
				printf("%s", va_arg(list, char *));
				break;
			case 'i':  /* int */
				printf("%i", va_arg(list, int));
				break;
			case 'c':  /* char */
				/* need a cast here since va_arg only takes fully promoted types */
				printf("%c", va_arg(list, int));
				break;
			case 'f':  /* float */
				printf("%f", va_arg(list, double));
				break;
			default:   /* if it does not comply with any of the cases */
				x++;
				continue;
		}
		if (*(format + x + 1) != 0)
		{
			printf("%s", sep);
		}
		x++;
	}
	va_end(list);
}
