#include "main.h"
#include <stdio.h>
/**
 * swap_int - Entry
 * @a: nombre
 * @b: nombre
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
