#include "main.h"
#include <stdio.h>
/**
 * _sqrt - valeur sqrt
 * @n: valeur
 * @j: valeur
 * Return: valeur
 */
int _sqrt(int n, int j)
{
	if (n * n == j)
		return (n);
	if (n * n > j)
		return (-1);

	return (_sqrt(n + 1, j));
}

/**
 * _sqrt_recursion - entry
 * @n: nombre
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
