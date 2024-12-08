#include "main.h"

/**
 * set_bit - Set the value
 * @n: number to modify
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
