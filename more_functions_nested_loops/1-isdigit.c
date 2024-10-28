#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isdigit - Entry
 * @c: digit checked
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

	return (0);
}
