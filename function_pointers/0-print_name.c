#include <stdlib.h>>
/**
 * print_name - Entry
 * @name: nom a afficher
 * @f: pointeur de fonction
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
