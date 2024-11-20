#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function prints a name
 * @name: name of function
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}

	f(name);
}
