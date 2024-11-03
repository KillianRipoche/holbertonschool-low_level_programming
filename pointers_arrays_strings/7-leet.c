#include "main.h"
#include <stdio.h>
/**
 * *leet - Entry
 * @str: chaine a convertir
 * Return: r
 */

char *leet(char *str)
{
	int i;
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l'};
	char b[] = { 4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = b[i] + '0';
		}
		str++;
	}

	return (r);
}
