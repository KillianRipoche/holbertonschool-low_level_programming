#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - Entry
 * @s: char
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
