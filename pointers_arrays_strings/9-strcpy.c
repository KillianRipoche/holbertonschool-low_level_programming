#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * *_strcpy - Entry
 * @dest: copy
 * @src: initial
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
