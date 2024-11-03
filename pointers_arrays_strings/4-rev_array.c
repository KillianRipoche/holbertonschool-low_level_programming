#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry
 * @a: array
 * @n: number 
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
