#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry
 *
 * Return: Always
 */
void more_numbers(void)
{
	int n = 0, m = 0;

	while (n <= 9)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
			_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		n++;
		_putchar('\n');
	}
}
