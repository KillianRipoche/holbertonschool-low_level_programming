#include "main.h"
/**
 * print_alphabet_x10 - main
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char a;
	int n = 48;

	while (48 <= 57)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		n++;
		_putchar('\n');
	}
}
