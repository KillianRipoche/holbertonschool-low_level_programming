#include "main.h"
#include "2-strlen.c"
/**
 *
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(i[str]);
	}
	_putchar('\n');
}
