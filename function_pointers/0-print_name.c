#include <stdlib.h>
/**
 * print_name - Entry
 * @name: nom a afficher
 * @f: pointeur de fonction
 * @char: test betty
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
