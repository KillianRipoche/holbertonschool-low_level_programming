#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory set to zero
 * @nmemb: number of elements
 * @size: the size of the memory
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;

	return ((void *)ptr);
}
