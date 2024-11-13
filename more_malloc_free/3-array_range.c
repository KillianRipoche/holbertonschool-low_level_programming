#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integer from min to max
 * @min: min int in array
 * @max: max int in array
 * Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size && min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
