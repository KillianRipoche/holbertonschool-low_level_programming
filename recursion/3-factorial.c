#include "main.h"
#include <stdio.h>
/**
 * factorial - Entry
 * @n: nombre
 * Return: varie en fontcion des résultats
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
