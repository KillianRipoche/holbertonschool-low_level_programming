#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: unsigned int for size
 * @c: char initialize
 * Return: Null if size 0, else return size
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(size);

	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
