#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Entry
 * @name: nom a afficher
 * @f: pointeur de fonction
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);
}
