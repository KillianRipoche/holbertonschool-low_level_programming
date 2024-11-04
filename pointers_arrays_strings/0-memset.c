#include "main.h"

/**
 * *_memset - Entry
 * @s: fill
 * @b: char
 * @n: b
 *
 * Return: Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
