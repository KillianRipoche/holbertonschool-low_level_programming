#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry
 * @c: Letters checked
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	return (0);
}
