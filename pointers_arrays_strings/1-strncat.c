#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strncat - Entry
 * @dest: valeur a retourner
 * @src: chaine
 * @n: valeur
 * Return: dest with cat src
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
