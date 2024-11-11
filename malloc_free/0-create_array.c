#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - Entry
 * @buffer: char
 * @size: taille
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size);
	if (size == 0)
		return (NULL);

	if (ar == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
