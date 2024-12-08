#include "main.h"

/**
 * flip_bits - number of bits
 * @n: 1er nombre
 * @m: 2nb nombre
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int nb = 0;

	while (diff)
	{
		nb += diff & 1;
		diff >>= 1;
	}

	return (nb);
}
