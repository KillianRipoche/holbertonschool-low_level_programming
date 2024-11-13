#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

		if (ptr == NULL)
			exit(98);

	return (ptr);
}
