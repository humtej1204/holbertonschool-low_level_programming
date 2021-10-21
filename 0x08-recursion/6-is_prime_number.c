#include "main.h"
/**
 * is_prime - algorithm
 * @n: integer number
 * @div: divider
 *
 * Return: 1 if is prime. 0 other
 */
int is_prime(int n, int div)
{
        if (div > (n / 2))
                return (1);
        if (n % div == 0)
                return (0);
        else
                return (is_prime(n, div + 1));
}
/**
 * is_prime_number - identify the prime number
 *
 * @n: integer number
 *
 * Return: 1 if is prime. 0 other
 */
int is_prime_number(int n)
{
        if (n == 0 || n == 1 || n < 0)
                return (0);
        else
                return (is_prime(n, 2));
}
