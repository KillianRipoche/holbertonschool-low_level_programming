#include "main.h"
/**
 * print_last_digit - Entry
 * @n: print modulo
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int lg = n % 10;

	if (lg < 0)
	{
		lg *= -1;
	}
	_putchar(lg + '0');
	return (lg);
}
