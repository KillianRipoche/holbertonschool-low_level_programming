#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: the array to check
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of 1st element if cmp isn't 0
 * if no element matches or size inferior to 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}
