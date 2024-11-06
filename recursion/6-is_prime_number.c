#include "main.h"
#include <stdio.h>
/**
 * check_prime - Entry
 * @n: number
 * @i: int
 * Return: check
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 2));
}
/**
 * is_prime_number - Entry
 * @n: number
 * Return: check
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (0);

	return (check_prime(n, 3));
}
