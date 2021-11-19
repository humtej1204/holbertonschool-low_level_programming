#include "main.h"
/**
 * flip_bits - change number.
 * @n: number
 * @m: other number
 *
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, changes = 0;

	diff = n ^ m;
	while (diff)
	{
		if (diff & 1)
			changes++;
		diff = diff >> 1;
	}
	return (changes);
}
