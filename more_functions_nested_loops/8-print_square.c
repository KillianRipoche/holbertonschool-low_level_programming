#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
void print_square(int size)
{
	int n, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (a = 1; a < size; a++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
