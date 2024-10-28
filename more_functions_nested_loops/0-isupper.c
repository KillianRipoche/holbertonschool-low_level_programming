#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper : Entry
 * @c: upper checked
 * Return: Always 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

	return (0);
}
