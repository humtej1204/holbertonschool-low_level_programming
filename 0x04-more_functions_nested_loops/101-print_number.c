#include "main.h"
/**
 * print_number - function
 *
 * @n: parameter
 */
void print_number(int n)
{
	int d, base10 = 1;
	/* Si n inicial es negativo */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* igualamos el valor de d con el valor inicial de n*/
	d = n;
	/* Obtenemos la notacion exponencial del numero */
	while (d > 9)
	{
		d = d / 10;
		base10 = base10 * 10;
	}
	/* Descomponemos el numero */
	while (base10 > 1)
	{
		_putchar((n / base10) + '0');
		n = n % base10;
		base10 = base10 / 10;
	}
	/* imprimimos el ultimo digito del numero */
	_putchar((n % 10) + '0');
}
