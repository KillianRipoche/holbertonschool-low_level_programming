#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Entry
 * @s: chaine a compter
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
