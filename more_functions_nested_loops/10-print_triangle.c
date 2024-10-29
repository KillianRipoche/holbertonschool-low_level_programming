#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry
 * @size:
 * Return: Always 0
 */
void print_triangle(int size)
{
	int n, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
			{
				if (i < size - n - 1)
				{
					_putchar(' ');
				}
				else
				_putchar(35);
			}
			_putchar('\n');

		}
	}
}
