#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Entry
 * @array: tableau a iterer
 * @size: longueur du tableau
 * @action: pointeur de fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
	}
